//Q73: Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>

int main()
{
    int arr[3][3];
    int i ,j,sum;
    int a[2];

    printf("Enter elements of the array \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
       a[i]=sum;
    }
    
    printf("Printing Array \n");

    for(i=0;i<2;i++)
    {
     printf("%d",a[i]);
     printf(" ");
    }
    return 0;


}
