//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter Second Number \n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping are\n");
    printf("first number is %d \n",a);
    printf("Second number is %d \n",b);
}
