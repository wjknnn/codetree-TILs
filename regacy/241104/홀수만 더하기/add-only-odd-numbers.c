#include <stdio.h>

int main() {
    int N, n, sum = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &n);
        if(n % 2 != 0 && n % 3 == 0) sum += n;
    }
    printf("%d", sum);
    return 0;
}