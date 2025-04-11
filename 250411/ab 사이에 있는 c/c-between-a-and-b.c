#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for(int i = a; i <= b; i++) {
        if(i % c == 0) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}