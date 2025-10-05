//Q69: Find the second largest element in an array.

#include <stdio.h>
int main()
{
    int max,max2,i,j;
    int a[5];

    printf("Enter elements of array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    max2=a[0];
    for(j=0;j<5;j++)
    {
        if(a[j]>max2 && a[j]<max)
        {
            max2=a[j];
        }
    }
    printf("Second Largest Element is: %d \n",max2);
    return 0;
}
