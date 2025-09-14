//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>
int main()
{
    int n,r,f=1,temp,i,sum=0;
    printf("Enter any number \n");
    scanf("%d",&n);
     
    temp=n;

    while(n>0)
    {
        r=n%10;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        f=1;
        n=n/10;
    }
     if(sum==temp)
     printf("Strong Number");
     else
     printf("Not a Strong Number");
}
