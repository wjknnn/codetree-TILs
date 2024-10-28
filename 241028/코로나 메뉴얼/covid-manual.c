#include <stdio.h>

int main() {
    int temp, e = 0;
    char cold;
    for(int i = 0; i < 3; i++) {
        scanf("%c %d\n", &cold, &temp);
        if(cold == 'Y' && temp >= 37) e++;
    }
    printf("%c", e >= 2 ? 'E' : 'N');
    return 0;
}