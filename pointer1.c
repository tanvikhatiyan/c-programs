//the variable which store the memory address of anothe variable is called pointer. 
//syntax: 1-int age = 22;
//        2-int*ptr = &age;
//        3-int _age = *ptr;
// example_

#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d", _age);
    return 0;
}


//declring pointer:
// int *ptr
//float *ptr
//char *ptr

//format specifier :
//printf("%p", &age)
//printf("%p", ptr)
//printf("%p", &ptr)