//Q77: Check if the elements on the diagonal of a matrix are distinct.


#include <stdio.h>

int main()
{
    int arr[3][3];
    int i,j,c,d=0;

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
        c=0;
        for(j=0;j<3;j++)
        {
            if(arr[i][i]==arr[j][j])
            {
                c++;
            }
        }
        if(c==2)
        {
            d=1;
            break;
        }
    }
    if(d==1)
    {
        printf("diagonal elements are not distinct \n");

    }
    else
    {
        printf("Diagonal elements are distinct \n");
    }
    return 0;
}
