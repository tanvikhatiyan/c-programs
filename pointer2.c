#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%p", &age);///hexadecimal value which is difficult for us to understand
    printf("%u\n", &age);// used for unsigned value it is give a simple address which is understood by us
    printf("%u\n", ptr);
    printf("%u\n", &ptr);//& used for address
    return 0;
}