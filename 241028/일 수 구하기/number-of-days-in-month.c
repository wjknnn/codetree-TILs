#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch(n) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: {
            printf("31");
            break;
        }
        case 2: {
            printf("28");
            break;
        }
        default: {
            printf("30");
            break;
        }
    }
    return 0;
}