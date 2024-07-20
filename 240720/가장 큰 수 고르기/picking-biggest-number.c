#include <stdio.h>
#include <limits.h>

int main() {
    int n, max_val = INT_MIN;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if(n > max_val) max_val = n;
    }
    printf("%d", max_val);
    return 0;
}