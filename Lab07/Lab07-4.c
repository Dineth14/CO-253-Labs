#include<stdio.h>

int main(void){

    int num1, num2, num3, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("%d is the largest. \n", largest);
    return 0;
}