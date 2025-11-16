//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.



#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    int i,j,c,d=0,majelement;

    printf("Enter elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                ++c;
            }
        }
        if(c>d)
        {
            d=c;
            majelement=arr[i];
        }
    }
    if(d> (int)n/2)
    {
        printf("%d is the majority element\n",majelement);
    }
    else{
        printf("%d\n",-1);
    }
}
