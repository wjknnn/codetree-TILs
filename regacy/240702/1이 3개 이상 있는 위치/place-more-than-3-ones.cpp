#include <iostream>

int arr[101][101];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };

int main() {
    int n, i, j, cnt = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
         for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
         }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            int c = 0;
            for(int l = 0; l < 4; l++) {
                if(arr[j + dx[l]][i + dy[l]] == 1) c++;
            }
            if(c >= 3) cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}