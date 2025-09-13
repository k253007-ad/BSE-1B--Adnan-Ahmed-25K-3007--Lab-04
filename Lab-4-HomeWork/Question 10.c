#include <stdio.h>
int main() {
    int size, n, crust, time, option;
    char cheese, id;
    float total=0;

    printf("Size (1=Small $8, 2=Medium $10, 3=Large $12): ");
    scanf("%d", &size);

    if(size==1) total=8;
    else if(size==2) total=10;
    else if(size==3) total=12;
    else { printf("Wrong size\n"); return 0; }

    printf("How many pizzas? ");
    scanf("%d", &n);
    total=total*n;

    printf("Crust (1=Regular, 2=Thin +$1, 3=Stuffed +$2): ");
    scanf("%d", &crust);
    if(crust==2) total=total+n*1;
    if(crust==3) total=total+n*2;

    printf("Extra cheese (Y/N)? ");
    scanf(" %c", &cheese);
    if(cheese=='Y' || cheese=='y') total=total+1.5;

    printf("Enter time (0-23): ");
    scanf("%d", &time);
    if(time>=11 && time<=14) total=total*0.9;

    printf("Student ID (Y/N)? ");
    scanf(" %c", &id);
    if(id=='Y' || id=='y') total=total-2;

    if(n==3 && crust==3)
        printf("Free garlic bread!\n");

    printf("Pickup(1) or Delivery(2)? ");
    scanf("%d", &option);
    if(option==2) total=total+3;

    printf("\n--- Receipt ---\n");
    printf("Pizzas: %d\n", n);
    printf("Final = $%.2f\n", total);

    return 0;
}
