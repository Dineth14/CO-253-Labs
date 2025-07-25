#include <stdio.h>

int main(void){

    int num1;
    int count = 0;
    printf("enter integer:");

    scanf("%d", &num1);

    int i;
    for (i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            count++;
            if (count >= 3) {
                printf("%d is not a prime number\n", num1);
                break;
            }
        }
    }
    if (count == 2 && i > 3) {
        printf("%d is a prime number\n", num1);
    }
}