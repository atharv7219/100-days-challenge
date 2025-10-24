//Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main()
{
    int arr[2][2];
    int trans[2][2];
    int i,j,c=0;

    printf("Enter elements of the array \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            trans[j][i]=arr[i][j];
    }
}

for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(trans[i][j]==arr[i][j])
            {
                c++;
            }
        }
    }

    if(c==4)
    {
        printf("Symmetric Matrix");
    }
        else
        {
        printf("Non Symmetric Matrix");
    }
}
