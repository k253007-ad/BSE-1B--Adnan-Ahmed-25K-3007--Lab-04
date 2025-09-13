#include <stdio.h>
int main() {
    int time;
    float total=20;
    printf("Enter time (0-23): ");
    scanf("%d", &time);

    if(time>=11 && time<=14)
        total=total*0.9;

    printf("Total = $%.2f\n", total);
    return 0;
}
