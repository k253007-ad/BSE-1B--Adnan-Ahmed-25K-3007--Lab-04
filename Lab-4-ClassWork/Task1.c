#include <stdio.h>

int main(){
	
	//Task 1
	
	int User_Number ;
	printf("Enter Number: ");
	scanf("%d" ,&User_Number);
	
	if(User_Number == 0){
		printf("\nZero");
	}
	else{
		printf("\nNon-Zero");
	}

	return 0;
}
