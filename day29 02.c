//Q58: Find the maximum and minimum element in an array.

#include <stdio.h>
int main()
{
    int max,min,i,a[5];

    printf("Enter array elements");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    min=a[0];
    for(i=1;i<=4;i++)
    {
      if(a[i]<min)
      {
        min=a[i];
      }
       if(a[i]>max)
       {
        max=a[i];
       }
    }
    printf("maximum element is : %d \n",max);
    printf("minimum element is: %d \n ",min);
}
