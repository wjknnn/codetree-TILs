#include <stdio.h>

int main() {
    int am, ae, bm, be;
    scanf("%d %d", &am, &ae);
    scanf("%d %d", &bm, &be);
    if(am == bm) {
        printf("%c", ae > be ? 'A' : 'B');
    }
    else printf("%c", am > bm ? 'A' : 'B');
    return 0;
}