#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N * 2 - 1; i += 2) {
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}