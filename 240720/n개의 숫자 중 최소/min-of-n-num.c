#include <stdio.h>
#include <limits.h>

int main() {
    int N, n, min_val = INT_MAX, min_cnt = 1;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &n);
        if(n < min_val) {
            min_val = n;
            min_cnt = 1;
        }
        else if(n == min_val) min_cnt++;
    }
    printf("%d %d", min_val, min_cnt);
    return 0;
}