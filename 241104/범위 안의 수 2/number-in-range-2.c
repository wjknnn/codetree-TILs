#include <stdio.h>

int main() {
    int n, cnt = 0, sum = 0;
    while(scanf("%d", &n) != EOF) {
        if(n >= 0 && n <= 200) {
            cnt++;
            sum += n;
        }
    }
    printf("%d %.1lf", sum, (double)sum / (double)cnt);
    return 0;
}