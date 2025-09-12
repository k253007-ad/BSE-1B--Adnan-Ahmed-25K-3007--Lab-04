#include <stdio.h>

int main(){
	
	//Task 3
	
	int number;
	printf("Enter Number: ");
	scanf("%d" ,&number);

	if(number > 0){
		printf("\n Number is Positive");
	}
	else if (number <  0){
		printf("\n Number is Negative");
	}
	else{
		printf("\n Number is Zero");
	}

	return 0;
}
