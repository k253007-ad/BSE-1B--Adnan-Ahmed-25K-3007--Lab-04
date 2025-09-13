#include <stdio.h>

int main(){
	
	//Task 2
	
	int first_number, second_number;
	printf("Enter First Number: ");
	scanf("%d" ,&first_number);
	printf("Enter Secund Number: ");
	scanf("%d" ,&second_number);

	if(first_number > second_number){
		printf("\n First Number is Greater");
	}
	else{
		printf("\n First Number is not Greater");
	}

	return 0;
}
