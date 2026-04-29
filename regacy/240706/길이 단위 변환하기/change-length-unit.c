#include <stdio.h>

int main() {
    double ft = 9.2, mi = 1.3;
    printf("%.1lfft = %.1lfcm\n", ft, ft * 30.48);
    printf("%.1lfmi = %.1lfcm", mi, mi * 160934);
    return 0;
}