//Q66: Insert an element in a sorted array at the appropriate position.



#include <stdio.h>

int main() {
    int arr[6];  
    int i, j, num;

    printf("Enter 5 sorted elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

   
    for (i = 0; i < 5; i++) {
        if (num < arr[i]) {
            break;
        }
    }

    for (j = 5; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    
    arr[i] = num;

   
    printf("Array after insertion:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
