#include<stdio.h>

int main (void){

    int num1;
    int num2;

    char operator;

    printf("enter number 1:\n");
    scanf("%d", &num1);
    printf("enter number 2:\n");
    scanf("%d", &num2);
    printf("enter operator (+, -, *, /):\n");
    scanf(" %c", &operator);

    switch (operator){

        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

}