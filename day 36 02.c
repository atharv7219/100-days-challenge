//Q72: Find the sum of all elements in a matrix.


#include <stdio.h>

int main()
{
    int arr[3][3];
    int i ,j,sum=0;

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
        for(j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
       
    }
    printf("Sum of the matrix is %d \n:",sum);
    return 0;


}
