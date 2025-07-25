#include<stdio.h>

int main(void){

    float x, y;
    int x1, y1;

    printf("enter number 1: \n");
    scanf("%f", &x);
    printf("enter number 2: \n");
    scanf("%f", &y);

    x1 = (int)x;
    y1 = (int)y;

    printf("integer value of number1: %d\n", x1);
    printf("integer value of number2: %d\n", y1);

    if (x1 != 0 && y1 != 0){
        printf("Both numbers are non-zero integers.\n");
    }
    if (x > 10.5 || y > 10.5){
        printf("At least one number is greater than 10.5.\n");
    }
    if ((x + y) != (x1 + y1)){
        printf("The sum of the original float values is not equal to the sum of the converted integers.\n");
    }
    else {
        printf("No special condition met.\n");
    }
}