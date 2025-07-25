#include<stdio.h>

int main(void){

    int num1;
    int i;
    int count = 0; 

    printf("input number: ");
    scanf("%d", &num1);

    for(i = 1; i <= num1; i++){
        if(num1 % i == 0){
            count = count + 1;
        }
    }

    if(count == 2 && num1 > 1){
        printf("number is a prime number\n");
    } else {
        printf("number given is not a prime number\n");
    }

    return 0;
}
