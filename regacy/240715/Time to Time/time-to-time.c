#include <stdio.h>

int main() {
    int a, b, c, d, h, m;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    h = c - a;
    m = d - b;
    printf("%d", h * 60 + m);
    return 0;
}