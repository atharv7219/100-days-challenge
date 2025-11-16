//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main()
{
    int nums[5];
    int i,j,d;
    printf("Enter elements of array nums");
    for(i=0;i<5;i++)
    {
        scanf("%d",&nums[i]);
    }

    for(i=0;i<5;i++)
    {
        d=1;
        for(j=0;j<5;j++)
        {
            d=d*nums[j];
        }
        d=d/nums[i];
        printf("%d,",d);
    }
    return 0;
}
