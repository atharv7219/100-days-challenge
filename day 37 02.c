//Q74: Find the transpose of a matrix.



#include <stdio.h>

int main()
{
    int arr[2][3];
    int trans [3][2];

    int i,j;
    printf("Enter elements of array \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Finding transpose of the matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            trans[j][i]=arr[i][j];
        }
    }

    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
