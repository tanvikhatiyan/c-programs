//ARRAY IS POINTER :
// int *ptr = &arr[0];
// int *ptr = arr;

//TRANSVERSE AN ARRAY:
//int adhar[10];
//int *ptr = &adhar[0];

//ARRAY AS FUNCTION ARGUMENTS:
//function declaration
//void printnumbers (int arr[], int n)
//or
//void printnumbrers(int *arr, int n)

// function call
// printnumbers(arr, n);

//example:

#include<stdio.h>
void printnumbers(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printnumbers(arr, 6);
    return 0;
}

void printnumbers(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

