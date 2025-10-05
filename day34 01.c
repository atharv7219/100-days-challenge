//Q67: Insert an element in an array at a given position.


#include <stdio.h>

int main() {
    int arr[5];
    int i, pos, num;

    printf("Enter 4 elements:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert (e.g., 2 15): ");
    scanf("%d %d", &pos, &num);

  
    for (i = 4; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[pos] = num;

    
    printf("Array after insertion:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
