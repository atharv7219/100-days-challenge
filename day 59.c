//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main()
{
    int arr[5];
    int i,k,max,c=0,sum=0;

    printf("Enter elements of the array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter any integer");
    scanf("%d",&k);

    max=arr[0];

    while(k>0)
    {
        for(i=1;i<5;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                c=i;
            }
        }
        sum=sum+max;
        max=arr[0];
        arr[c]=0;
        --k;
    }
    printf("%d",sum);
}
