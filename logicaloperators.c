#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    printf("enter the value of c:");
    scanf("%d", &c);
    printf("enter the value of d:");
    scanf("%d", &d);

    printf("%d \n", (a>=b)&&(c<=d));
    printf("%d \n", (a<=b)||(c==d));
    printf("%d \n", !(a==b));

    return 0;
}