#include <stdio.h>
int main() {
    int size;
    printf("Enter size (1=Small, 2=Medium, 3=Large): ");
    scanf("%d", &size);

    if(size==1)
        printf("Small pizza\n");
    else if(size==2)
        printf("Medium pizza\n");
    else if(size==3)
        printf("Large pizza\n");
    else
        printf("Invalid size\n");

    return 0;
}
