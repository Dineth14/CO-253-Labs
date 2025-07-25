#include<stdio.h>

int main(void){

    int x;
    

    printf("enter number: ");
    scanf("%d", &x);

    printf("preincrement = %d\n",  ++x);
    printf("X VALUE = %d\n",  x);
    printf("postincrement= %d\n",  x--);
    printf("X VALUE = %d\n",  x);

    printf("predicrement = %d\n",  --x);    
    printf("X VALUE = %d\n",  x);
    printf("postdecrement= %d\n",  x++);
    printf("X VALUE = %d\n",  x);


    return 0;
}