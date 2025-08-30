//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number \n");
    scanf("%d",&n);
    if(n==0)
    printf("Number is zero \n");
    else if (n>0)
    printf("Number is positive \n");
    else
    printf("Number is Negative \n");
}
