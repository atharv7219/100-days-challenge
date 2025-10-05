//Q68: Delete an element from an array.


#include <stdio.h>

int main() {
    int arr[5], i, pos, n = 5;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 0;
    }

    
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

    
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
