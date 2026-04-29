#include <stdio.h>

int main() {
    double sum;
    int a, b, add;
    scanf("%d %d", &a, &b);
    sum = (double)(a + b) / 2;
    printf("%d %.1lf", a + b, sum);
    return 0;
}