#include <stdio.h>

int main() {
    // Pizza Man
    int pizza;
    printf("Welcome to Karachi Pizza");
    printf("\nWhat would you like to have");
    printf("\n1.Small \n2.Medium \n3.Large");
    printf("\nEnter Size : ");
    scanf("%d",&pizza);
    if(pizza == 1){
        printf("\n That will be Rs:350");
    } else if(pizza == 2){
        printf("\n That will be Rs:500");
    } else if ( pizza == 3 ) {
        printf("\n That will be Rs:850");
    } else {
        printf("\n Enter Correct Number");
    }

    return 0;
}
