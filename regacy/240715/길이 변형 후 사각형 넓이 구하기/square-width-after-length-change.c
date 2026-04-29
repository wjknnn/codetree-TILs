#include <stdio.h>

int main() {
    int w, h;
    scanf("%d %d", &w, &h);
    w += 8;
    h *= 3;
    printf("%d\n%d\n%d", w, h, w * h);
    return 0;
}