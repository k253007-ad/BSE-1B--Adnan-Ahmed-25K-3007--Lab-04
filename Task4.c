#include <stdio.h>

int main(){
	
	//Task 4
	
	int day;
	printf("Enter number :");
	scanf("%d" ,&day);
	
	switch(day){
		case 1: printf("Pink Color");
		break;
		case 2: printf("White Color");
		break;
		case 3: printf("Yellow Color");
		break;
		case 4: printf("Purple Color");
		break;
		case 5: printf("Green Color");
		break;
		default: printf("Invalid Input");
	}
	
	return 0;
}
