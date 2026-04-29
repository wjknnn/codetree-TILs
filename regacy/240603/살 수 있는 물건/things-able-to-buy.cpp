#include <iostream>

int main() {
    int n;
    scanf("%d", &n);
    if(n >= 3000) printf("book");
    else if(n >= 1000) printf("mask");
    else printf("no");
    return 0;
}