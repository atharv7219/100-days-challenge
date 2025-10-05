////Q62: Reverse an array without taking extra space.

#include <stdio.h>
int main() {
  
    int arr[5];
    
    int start = 0, end = 4, temp,i;

    printf("Enter array Elements\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
