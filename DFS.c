#include <stdio.h>

int a[10][10], visited[10], n;

void dfs(int v) {
    int i;
    printf("%d ", v);
    visited[v] = 1;
    for (i = 0; i < n; i++)
        if (a[v][i] == 1 && !visited[i])
            dfs(i);
}

int main() {
    int i, j, v;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter starting vertex: ");
    scanf("%d", &v);
    printf("DFS: ");
    dfs(v);
    return 0;
}

