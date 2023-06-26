// ARRAY: collection of similar datatype stored at contiguous memory locations.
// example:

#include<stdio.h>
int main()
{
    int marks1 = 98;
    int marks2 = 95;
    int marks3 = 96;

    int marks[] = {98, 95, 96};
    return 0;
}

//SYNTAX:
// int marks[3]; : 3 is number of blocks are used for storing similar datatypr values
//char name[10];
//float price[2];

//INPUT:
//scanf("%d", &marks[0]);
//printf("%d", marks[0]);


//example:
#include<stdio.h>

int main()
{
   printf("enter phy :");
   scanf("%d", &marks[0];)
    
   printf("enter chem :");
   scanf("%d", &marks[1];)

    printf("enter math :");
    scanf("%d", &marks[2]);

    printf(" phy : %d, chem : %d, math : %d", marks[0], marks[1], marks[2]);
    return 0;

}

//initialization of array
// int marks[] = {97, 98, 89};
// int marks[3] = {97, 98, 89};