#include <iostream>

int main() {
    int a, b, c, d, e;
    scanf("%d", &a);
    scanf("%d %d %d %d", &b, &c, &d, &e);
    printf("%d\n", a > b ? 1 : 0);
    printf("%d\n", a > c ? 1 : 0);
    printf("%d\n", a > d ? 1 : 0);
    printf("%d", a > e ? 1 : 0);
    return 0;
}