//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.


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
        int firstNeg = 0;
        for(int j=i;j<i+k;j++){
            if(arr[j] < 0){ firstNeg = arr[j]; break; }
        }
        if(i) printf(" ");
        if(firstNeg==0) printf("0"); else printf("%d", firstNeg);
    }
    printf("\n");
    return 0;
}
