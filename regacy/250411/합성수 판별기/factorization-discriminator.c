#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 2; i < N; i++) {
        if(N % i == 0) {
            printf("C");
            return 0;
        }
    }
    printf("N");
    return 0;
}