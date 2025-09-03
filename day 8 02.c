//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    if(a>b && b>c)
    {
        printf("A is the largest among all three numbers");
    }
    else if(b>a && b>c)
    {
      printf("B is the largest among all three numbers");  
    }
    else {
    printf("C is the largest among all three numbers");}
}
