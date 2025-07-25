#include<stdio.h>

int main(void){

    int marks;

    printf("enter marks: \n");
    scanf("%d", &marks);

    if(marks >= 75){
        printf("Grade - A\n");
    }else if(marks >= 65 ){
        printf("Grade - B\n");
    }else if(marks >=55){
        printf("Grade - C\n");
    }else if (marks >= 35){
        printf("Grade - D\n");
    }else{
        printf("Grade - F\n");
    }
    return 0;
}