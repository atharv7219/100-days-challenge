//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main()
{
    int nums[5];
    int target;
    int i,c=-1,d=-1;

    printf("Enter elements of array in sorted way \n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&nums[i]);
    }

    printf("Enter the target number \n");
    scanf("%d",&target);

    for(i=0;i<5;i++)
    {
        if(nums[i]==target)
        {
            c=i;
            break;
        }
        
    }

    for(i=4;i>=0;i--)
    {
        if(nums[i]==target)
        {
            d=i;
            break;
        }
       
    }
    printf("%d%d",c,d);
    return 0;

}
