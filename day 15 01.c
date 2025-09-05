//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main()
{
    int fact=1,i,n;
    
    printf("Enter any number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of the number is %d",fact);
}
