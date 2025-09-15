//Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>
int main()
{
    int  i,sum=0,n;

    printf("Enter any number");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }
}
