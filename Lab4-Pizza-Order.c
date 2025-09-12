#include <stdio.h>

int main() {
    // Pizza Man
    int pizza;
    printf("Welcome to Pizza Hut");
    printf("\nWhat would you like to have");
    printf("\n1.Small \n2.Medium \n3.Large");
    printf("\nEnter Size : ");
    scanf("%d",&pizza);
    if( pizza == 1 ){
        printf("\n That will be $8");
    } else if( pizza == 2 ){
        printf("\n That will be $15");
    } else if ( pizza == 3 ) {
        printf("\n That will be $21");
    } else {
        printf("\n Invalid Pizza");
    }
    return 0;
}
