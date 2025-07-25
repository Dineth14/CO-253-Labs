#include<stdio.h>

int main(void){

	int i = 1;
	int factorial = 1;
	int num1;

	printf("input number: \n");

	scanf("%d", &num1);

	for(i = 1; i <= num1; i++){
		factorial = factorial * i;
		}

	printf("factorial of number= %d\n", factorial); 
	return 0;

}