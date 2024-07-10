#include <stdio.h>

int n, m, cnt;
int graph[1001][1001], visited[1001];

void DFS(int vertex) {
    for(int curr_v = 1; curr_v <= n; curr_v++) {
        if(graph[vertex][curr_v] && !visited[curr_v]) {
            cnt++;
            visited[curr_v] = 1;
            DFS(curr_v);
        }
    }
}

int main() {
    int i, x, y;
    scanf("%d %d", &n, &m);
    for(i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        graph[x][y] = 1;
    }
    DFS(1);
    printf("%d", cnt);
    return 0;
}