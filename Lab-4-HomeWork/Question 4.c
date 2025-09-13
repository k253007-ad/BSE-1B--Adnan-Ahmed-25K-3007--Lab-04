#include <stdio.h>
int main() {
    int crust, total=8;
    printf("Enter crust (1=Regular, 2=Thin, 3=Stuffed): ");
    scanf("%d", &crust);

    if(crust==2) total=total+1;
    if(crust==3) total=total+2;

    printf("Total = $%d\n", total);
    return 0;
}
