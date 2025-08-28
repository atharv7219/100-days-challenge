//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


#include <stdio.h>
int main()
{
    int a,b,sum,diff,quotient,product;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
     sum=a+b;
     diff=a-b;
     quotient=a/b;
     product=a*b;
 printf("Sum of the numbers is:%d\n",sum);
 printf("Product of the numbers is:%d\n",product);
 printf("Difference of the numbers is:%d\n",diff);
 printf("Quotient of the numbers is%d\n",quotient);
}
