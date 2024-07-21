#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%s", a >= 10 && a <= 20 ? "yes" : "no");
    return 0;
}