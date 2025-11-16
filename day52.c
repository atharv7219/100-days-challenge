//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main()
{
    int arr[5];
    int x,i,c=-1;
    printf("Enter elements of array in sorted order");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter any number");
    scanf("%d",&x);

   int  min=0;
   
   for(i=0;i<5;i++)
   {
    if(arr[i]>=x)
    {
        min=arr[i];
        c=i;
        break;
    }
   }
   if(c!=-1)
   {
    printf("Smallest number greater than %d is %d, whose index is %d",x,min,c);

   }
   else{
    printf("No element greater than %d is found. So output is -1.",x);
   }
}
