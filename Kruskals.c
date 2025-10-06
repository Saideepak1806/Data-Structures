#include <stdio.h>

int parent[10];

int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void union_sets(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

int main() {
    int n, a[10][10];
    int i, j, u, v, min, ne = 1, mincost = 0;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix (999 for no edge):\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        parent[i] = i;

    while (ne < n) {
        min = 999;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (find(i) != find(j) && a[i][j] < min) {
                    min = a[i][j];
                    u = i; v = j;
                }
        union_sets(u, v);
        printf("Edge %d: (%d -> %d) = %d\n", ne++, u, v, min);
        mincost += min;
        a[u][v] = a[v][u] = 999;
    }
    printf("Total cost = %d\n", mincost);
    return 0;
}

