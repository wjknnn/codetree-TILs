#include <stdio.h>

int main() {
    int a, b, cnt = 0, sum = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++) {
        if(i % 5 == 0 || i % 7 == 0) {
            cnt++;
            sum += i;
        }
    }
    printf("%d %.1lf", sum, (double)sum / (double)cnt);
    return 0;
}