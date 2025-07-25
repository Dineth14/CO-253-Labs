#include<stdio.h>

int main(){

    int r;
    float pi = 3.14;
    float area;

    printf("Enter radius: \n");
    scanf("%d", &r);        

    area = pi * r * r;

    printf("Area = %f\n", area);
    return 0;
}