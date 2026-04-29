#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        if((i + 2) % 2 == 0) {
            printf("*");
        }
        else {
            for(int j = 0; j <= i; j++) {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}