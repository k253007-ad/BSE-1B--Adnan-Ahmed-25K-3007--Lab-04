#include <stdio.h>
int main() {
    int n, crust;
    printf("How many pizzas? ");
    scanf("%d", &n);
    printf("Crust (1=Regular, 2=Thin, 3=Stuffed): ");
    scanf("%d", &crust);

    if(n==3 && crust==3)
        printf("Free garlic bread!\n");
    else
        printf("No free item\n");

    return 0;
}
