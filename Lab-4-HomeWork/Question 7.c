#include <stdio.h>
int main() {
    char c;
    float total=20;
    printf("Do you have student ID (Y/N)? ");
    scanf(" %c", &c);

    if(c=='Y' || c=='y')
        total=total-2;

    printf("Final = $%.2f\n", total);
    return 0;
}
