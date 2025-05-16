#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N * 2 + 1; i++) {
        for(int j = 1; j <= N * 2 + 1; j++) {
            printf("%s", i % 2 == 0 && j % 2 == 0 ? "  " : "* ");
        }
        printf("\n");
    }
    return 0;
}