#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            for(int j = N; j >= 1; j--) printf("%d", j);
        }
        else {
            for(int j = 1; j <= N; j++) printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}