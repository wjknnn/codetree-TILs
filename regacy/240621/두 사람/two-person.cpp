#include <iostream>

int main() {
    int age1, age2;
    char sex1, sex2;
    scanf("%d %c", &age1, &sex1);
    scanf("%d %c", &age2, &sex2);
    if((age1 >= 19 && sex1 == 'M') || (age2 >= 19 && sex2 == 'M')) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}