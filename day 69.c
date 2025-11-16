//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


#include <stdio.h>

int main()
{
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    
    int tort = a[0], hare = a[0];
    do{
        tort = a[tort];
        hare = a[a[hare]];
    } while(tort != hare);

    tort = a[0];
    while(tort != hare){
        tort = a[tort];
        hare = a[hare];
    }
    printf("%d\n", tort);
    return 0;
}
