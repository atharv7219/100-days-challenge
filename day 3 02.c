//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter first number \n ");
    scanf("%d",&a);
    printf("Enter second number \n");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("Number after swapping are \n");
    printf("First number is: %d \n",a);
    printf("Second number is : %d \n",b);
    return 0;
}
