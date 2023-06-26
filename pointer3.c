/* pointer in function call:
call by value and call by refrence .*/

// call by value : we pass value of variable as argument 
// example:

#include<stdio.h>
void square(int n);

int main()
{
    int number = 4;
    square(number);
    printf(" number is :%d\n", number);
    return 0;
}

void square(int n)
{
    n = n * n;
    printf("square is :%d\n", n);
}

//call by refrence : when we pass address of variable as argument.
// example:

#include<stdio.h>

void _square(int *n);

int main()
{
    int number = 4;
    square(number);
    printf(" number is :%d\n", number);

    _square(&number);
    printf("number = %d\n", number);
    return 0;
}

void _square(int *n)
{
    n = n*n;
    printf("square = %d\n", n);
}
