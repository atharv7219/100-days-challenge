//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter first Number");
    scanf("%d",&a);
    printf("Enter second Number");
    scanf("%d",&b);

    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    printf("HCF of the two number is: %d \n",a);
}
