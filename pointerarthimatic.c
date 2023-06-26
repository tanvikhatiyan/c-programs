//POINTER ARTHIMATIC : POINTER CAN BE INCREAMENT OR DECREMENT
//EXAMPLE

#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    printf(" ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    return 0;
}

// after increment or decrement the value is increase or decrese by 4 bytes(int)
// 4 byte(float)
// 1 byte(char)

// we can substract one pointer from another pointer 
// we can also compare 2 pointers with each other 