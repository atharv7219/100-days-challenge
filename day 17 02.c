//Q34: Write a program to check if a number is prime.

#include <stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter any number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    printf("Prime Number");
    else
    printf("Not a Prime Number");

}
