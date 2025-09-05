//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter any number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("Sum is: %d \n",sum);
}
