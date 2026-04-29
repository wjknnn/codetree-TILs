#include <stdio.h>

int main() {
    int N, cnt;
    scanf("%d", &N);
    cnt = N;
    for(int i = 0; i < N * 2 - 1; i++) {
        for(int j = 0; j < cnt; j++) {
            printf("* ");
        }
        printf("\n");
        if(i < N - 1) cnt--;
        else cnt++;
    }
    return 0;
}