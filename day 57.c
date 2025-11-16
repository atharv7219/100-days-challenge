//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.



#include <stdio.h>

int main()
{
    int arr[5];
    int i,j,c=-1,a;

    printf("Enter elements of the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }


     for(i=0;i<5;i++)
     {
         a=0;
        for(j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[i])
            {
                printf("%d,",arr[j]);
                a=1;
                break;
            }
            
        }
        if(a!=1)
        {
            printf("%d,",c);
        }
     }
     return 0;
}
