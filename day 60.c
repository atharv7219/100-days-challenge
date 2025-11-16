//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int k; scanf("%d",&k);

    if(k<=0 || k>n){ printf("Invalid k\n"); return 0; }

    for(int i=0;i<=n-k;i++){
        int mx = arr[i];
        for(int j=i;j<i+k;j++) if(arr[j] > mx) mx = arr[j];
        if(i) printf(" ");
        printf("%d", mx);
    }
    printf("\n");
    return 0;
}
