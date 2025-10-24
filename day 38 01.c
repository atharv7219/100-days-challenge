//Q75: Add two matrices.

#include <stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j;

    printf("Enter elements of the 1st array ");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

        printf("Enter elements of the 2nd array ");

     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        }
    }

    
    printf("Printing sum of the arrays \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
