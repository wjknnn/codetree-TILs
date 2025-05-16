#include <stdio.h>

int main() {
    int N, cnt = 1;
    scanf("%d", &N);
    for(int i = 0; i < N * 2 - 1; i++) {
        for(int j = 0; j < N - cnt; j++) {
            printf(" ");
        }
        for(int j = 0; j < cnt * 2 - 1; j++) {
            printf("*");
        }
        printf("\n");
        if(i < N - 1) cnt++;
        else cnt--;
    }
    return 0;
}