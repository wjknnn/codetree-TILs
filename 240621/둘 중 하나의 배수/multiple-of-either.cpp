#include <iostream>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a%3==0||a%5==0?1:0);
    return 0;
}