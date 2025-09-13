#include <stdio.h>
int main() {
    char c;
    float total=8;
    printf("Extra cheese (Y/N)? ");
    scanf(" %c", &c);

    if(c=='Y' || c=='y')
        total=total+1.5;

    printf("Total = $%.2f\n", total);
    return 0;
}
