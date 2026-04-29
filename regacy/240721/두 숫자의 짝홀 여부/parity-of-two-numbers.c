#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%s\n", a % 2 == 0 ? "even" : "odd");
    printf("%s", b % 2 == 0 ? "even" : "odd");
    return 0;
}