#include <stdio.h>

int main() {
    int am, ae, bm, be;
    scanf("%d %d", &am, &ae);
    scanf("%d %d", &bm, &be);
    printf("%d", am > bm && ae > be);
    return 0;
}