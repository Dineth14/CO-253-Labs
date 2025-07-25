#include<stdio.h>

int main(void){

    int num1;
    int num2;
    int num3;

    printf("Enter number 1: \n");       
    scanf("%d", &num1);
    printf("Enter number 2: \n");
    scanf("%d", &num2);
    printf("Enter number 3: \n");
    scanf("%d", &num3);
    
    
    if (num1 > 0 && num2 >0 && num3 >0){
        printf("All numbers are positive.\n");
    } else if (num1 == 0 || num2 == 0 || num3 == 0){
        printf("at least one number is zero.\n");
    }else{
        printf("at least 1 number is negative.\n");
    }
}