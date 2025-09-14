//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main()
{
    int i,den=3,n,num;
    float sum=0.0;
    printf("Enter the nth term of the series");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
num=2*i;
sum=sum+((float)num/den);
den+=4;
    }
    printf("Sum of The series is: %f \n",sum);
}
