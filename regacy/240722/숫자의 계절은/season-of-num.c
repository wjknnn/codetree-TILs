#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    if(m < 3 || m > 11) printf("Winter");
    else if(m > 8) printf("Fall");
    else if(m > 5) printf("Summer");
    else printf("Spring");
    return 0;
}