//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.


#include <stdio.h>

int main()
{
    int m,n,i=0,j=0,p=0;
    printf("Enter size of first array\n");
    scanf("%d",&m);
    printf("Enter size of second array\n");
    scanf("%d",&n);

    int arr1[m];
    int arr2[n];
    int merged[m+n];

    printf("Enter elements of first array\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements of the second array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            merged[p]=arr1[i];
            ++p;++i;
        }
        else
        {
            merged[p]=arr2[j];
            ++p;++j;
        }
    }
    while(i<m || j<n)
    {
        if(i<m)
        {
            merged[p]=arr1[i];
            ++p;++i;
        }
        else
        {
            merged[p]=arr2[j];
            ++p;++j;
        }
    }

    printf("Merged array in sorted order \n");
    for(i=0;i<m+n;i++)
    {
        printf("%d",merged[i]);
    }
    return 0;
}
