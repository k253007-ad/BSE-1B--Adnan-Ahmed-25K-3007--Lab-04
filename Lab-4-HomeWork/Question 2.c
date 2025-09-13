#include <stdio.h>
int main() {
    int n;
    printf("How many small pizzas? ");
    scanf("%d", &n);

    if(n>1)
        printf("Check our multi-pizza deals\n");
    else
        printf("Your total is $8\n");

    return 0;
}
