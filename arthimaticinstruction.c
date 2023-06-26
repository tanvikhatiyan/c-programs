#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("enter the value a:");
    scanf("%f", &a);
    printf("enter the value b:");
    scanf("%f", &b);
    printf("enter the value pf c:");
    scanf("%f", &c);
    printf("emter the value of d:");
    scanf("%f", &d);

    float exp = (a*b/c*d);
    printf("exp is: %f", exp);
    return 0;

}