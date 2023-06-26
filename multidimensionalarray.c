// MULTIDIMENSIONAL ARRAY:
//2D arrays:
//int arr[][] = {{1,2},{3,4}};
//access
//arr[0][0]
//arr[0][1]
//arr[1][0]
//arr[1][1]

//example:

#include<stdio.h>

int main()
{
    int marks[2][3]; // ---|---
     marks[0][0] = 95;
     marks[0][1] = 93;
     marks[0][2] = 92;

     marks[1][0] = 90;
     marks[1][1] = 92;
     marks[1][2] = 90;

    printf("%d", marks[1][1]);
    return 0;
}