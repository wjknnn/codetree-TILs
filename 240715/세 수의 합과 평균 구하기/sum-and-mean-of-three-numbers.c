#include <stdio.h>

int main() {
    int a, b, c, add, sum;
    scanf("%d %d %d", &a, &b, &c);
    add = a + b + c;
    sum = add / 3;
    printf("%d\n%d", add, sum);
    return 0;
}