#include <iostream>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", b > a && b < c ? 1 : 0);
    return 0;
}