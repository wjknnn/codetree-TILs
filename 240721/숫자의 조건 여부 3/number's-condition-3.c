#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%s", a % 13 == 0 || a % 19 == 0 ? "True" : "False");
    return 0;
}