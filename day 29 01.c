//Q57: Find the sum of array elements.


#include <stdio.h>
int main()
{
    int a[5],i,j,sum=0;

    printf("Enter array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        sum=sum+a[j];
    }
    printf("Sum of array elements is: %d \n",sum);
}
