#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    printf("%d\n", (a%=b));
    return 0;
}