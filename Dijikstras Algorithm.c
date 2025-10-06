#include <stdio.h>

int main() {
    int n, a[10][10], vis[10] = {0}, dist[10], i, j, u, v, min;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix (999 for no edge):\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter source vertex: ");
    scanf("%d", &v);
    for (i = 0; i < n; i++) dist[i] = a[v][i];
    vis[v] = 1; dist[v] = 0;
    for (i = 1; i < n; i++) {
        min = 999;
        for (j = 0; j < n; j++)
            if (!vis[j] && dist[j] < min) { min = dist[j]; u = j; }
        vis[u] = 1;
        for (j = 0; j < n; j++)
            if (!vis[j] && dist[u] + a[u][j] < dist[j])
                dist[j] = dist[u] + a[u][j];
    }
    printf("Shortest distances:\n");
    for (i = 0; i < n; i++) printf("%d -> %d = %d\n", v, i, dist[i]);
    return 0;
}

