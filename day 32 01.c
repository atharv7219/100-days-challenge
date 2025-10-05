//Q63: Merge two arrays.


#include <stdio.h>

int main() {
    int arr1[5], arr2[5], merged[10];
    int i;

   
    printf("Enter  elements for first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

   
    printf("Enter  elements for second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    
    for (i = 0; i < 5; i++) {
        merged[i] = arr1[i];         
        merged[i + 5] = arr2[i];    
    }

 
    printf("Merged array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
