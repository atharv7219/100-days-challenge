//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter any number \n");
    scanf("%d ",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum till first n natural number is %d ",sum);
}
