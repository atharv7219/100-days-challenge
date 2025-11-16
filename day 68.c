//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number


#include <stdio.h>

int main()
{
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int total = 0;
    for(int i=0;i<n;i++) total ^= arr[i];
    for(int x=0;x<=n; x++) total ^= x;
    printf("%d\n", total);
    return 0;
}
