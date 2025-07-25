#include<stdio.h>

int main(void){

    int num1;
    int num2;

    printf("enter number 1: \n");
    scanf("%d",&num1);
    printf("enter number2: \n");
    scanf("%d", &num2);

    printf("sum = %d\n", num1 + num2);
    printf("substraction = %d\n", num1 - num2);
    printf("multiplication = %d\n", num1*num2);
    printf("division = %f\n", (float)num1/num2);
    printf("modulus = %d\n", num1 % num2);

    return 0;

}
