#include <stdio.h>

int main() {
    int a, b, c, large;
    scanf("%d %d %d", &a, &b, &c);
    large = a;
    if(b > large) large = b;
    if(c > large) large = c;
    printf("%d", large);
    return 0;
}