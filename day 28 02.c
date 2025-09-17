//Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>
int main()
{
    int a[5];
    int i,j;
    
    printf("Enter elements of array a");

    for(i=0;i<5;i++)
    {
       scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        printf("%d\t ",a[j]);
    }
}
