#include <stdio.h>

int main() {
    // Variable declaration and input
    int n;
    int sum = 0;

    scanf("%d", &n);

    // Find divisors among numbers from 1 to n-1.
    for(int i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }

    // Print 'P' if sum and n are the same, otherwise print 'N'.
    if(sum == n)
        printf("P");
    else
        printf("N");

    return 0;
}