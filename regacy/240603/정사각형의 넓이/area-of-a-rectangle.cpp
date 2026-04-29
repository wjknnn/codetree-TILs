#include <iostream>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n * n);
    if(n < 5) printf("\ntiny");
    return 0;
}