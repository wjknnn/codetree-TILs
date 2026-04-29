#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        for(int j = i; j < N; j++) {
            for(int l = i; l < N; l++) {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}