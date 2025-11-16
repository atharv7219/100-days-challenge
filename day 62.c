//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.


#include <stdio.h>
#include <limits.h>

int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int maxSoFar = INT_MIN;
    int cur = 0;
    for(int i=0;i<n;i++){
        cur += arr[i];
        if(cur > maxSoFar) maxSoFar = cur;
        if(cur < 0) cur = 0;
    }
    printf("%d\n", maxSoFar);
    return 0;
}
