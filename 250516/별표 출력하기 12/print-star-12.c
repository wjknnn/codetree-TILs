#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == 0 || (j % 2 != 0 && j >= i)) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}