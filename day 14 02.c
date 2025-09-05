//Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>

int main()
{
    int product=1,i,n;
    printf("Enter any number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            product=product*i;
        }
    }
    printf("Product od even number till n is : %d \n",product);
}
