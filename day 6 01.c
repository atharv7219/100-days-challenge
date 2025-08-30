//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number \n");
    scanf("%d",&n);
    if(n%2==0)
    printf("Even Number \n");
    else
    printf("Odd Number \n");
}
