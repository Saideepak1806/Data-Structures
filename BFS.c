#include <stdio.h>

int main() {
    int n, a[10][10], visited[10] = {0}, q[10], f = 0, r = -1, v, i, j;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter starting vertex: ");
    scanf("%d", &v);
    visited[v] = 1;
    q[++r] = v;
    printf("BFS: ");
    while (f <= r) {
        v = q[f++];
        printf("%d ", v);
        for (i = 0; i < n; i++) {
            if (a[v][i] == 1 && visited[i] == 0) {
                q[++r] = i;
                visited[i] = 1;
            }
        }
    }
    return 0;
}

