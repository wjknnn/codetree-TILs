#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n >= 80) printf("pass");
    else printf("%d more score", 80 - n);
    return 0;
}