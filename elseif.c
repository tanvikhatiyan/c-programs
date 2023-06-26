#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);

    if(marks<=100 && marks>=95){
        printf("grade A+");
    }
    else if(marks<95 && marks>=90){
        printf("grade A");
    }
    else if(marks<90 && marks>=70){
        printf("grade B+");
    }
    else if(marks<70 && marks>=50){
        printf("grade B");
    }
    else if(marks<50 && marks>=30){
        printf("grade C");
    }
    else{
        printf(" sorry, you are fail");
    }
}