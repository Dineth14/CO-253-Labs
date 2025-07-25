#include<stdio.h>

int main (void){

    int i;

    for(i = 0; i < 100; i++) {
       
        if(i % 2 == 1 ){
            continue;    
        }
        if (i > 50){
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}
