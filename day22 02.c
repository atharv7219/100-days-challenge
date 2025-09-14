//Q44: Write a program to find the sum of the series: 1/2 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
{
    int i,n,num,den;
    float sum=0.0;

    printf("Enter the nth term of the series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     num=(2*i)-1;
     den=2*i;
     sum=sum+((float)num/den);
    }
    printf("Sum of the Series is : %f \n",sum);
}
