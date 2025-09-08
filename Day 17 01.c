//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main()
{
    int n,s=0,temp,r;
    printf("Enter any number ");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(temp==s)
    {
        printf("Armstrong Number");
    }
    else{
        printf("Not a Armstrong Number");
    }
}
