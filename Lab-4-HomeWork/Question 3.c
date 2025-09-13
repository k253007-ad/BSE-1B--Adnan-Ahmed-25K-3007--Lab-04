#include <stdio.h>
int main() {
    int n, total=0;
    printf("Enter number of pizzas (1-3): ");
    scanf("%d", &n);

    if(n==1) total=8;
    else if(n==2) total=15;
    else if(n==3) total=21;

    if(total>0)
        printf("You ordered %d pizza(s). Total = $%d\n", n, total);
    else
        printf("Invalid choice\n");

    return 0;
}
