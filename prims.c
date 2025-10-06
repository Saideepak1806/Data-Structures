#include <stdio.h>

int main() {
    int n, a[10][10], vis[10] = {0}, i, j, min, u, v, ne = 1, cost = 0;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix (999 for no edge):\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    vis[0] = 1;
    while (ne < n) {
        min = 999;
        for (i = 0; i < n; i++)
            if (vis[i])
                for (j = 0; j < n; j++)
                    if (!vis[j] && a[i][j] < min) {
                        min = a[i][j];
                        u = i; v = j;
                    }
        printf("Edge %d: (%d -> %d) = %d\n", ne++, u, v, min);
        cost += min;
        vis[v] = 1;
    }
    printf("Total cost = %d\n", cost);
    return 0;
}

