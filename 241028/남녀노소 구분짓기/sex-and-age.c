#include <stdio.h>

int main() {
    int gender, age;
    scanf("%d", &gender);
    scanf("%d", &age);
    if(gender) printf("%s", age >= 19 ? "WOMAN" : "GIRL");
    else printf("%s", age >= 19 ? "MAN" : "BOY");
    return 0;
}