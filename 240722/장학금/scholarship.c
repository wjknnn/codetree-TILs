#include <stdio.h>

int main() {
    int mid, end;
    scanf("%d %d", &mid, &end);
    if(mid >= 90) {
        if(end >= 95) printf("100000");
        else if(end >= 90) printf("50000");
        else printf("0");
    }
    else printf("0");
    return 0;
}