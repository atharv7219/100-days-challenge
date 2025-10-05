//Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int arr[5];
    int n, i;
    
    
    printf("Enter 5 sorted elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element to search: ");
    scanf("%d", &n);

    int low = 0, high = 4, mid, c = 0;

    
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == n) {
            c = mid;
            break;
        } else if (n < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

   
    if (found != 0)
        printf("Found at index %d\n", c);
    else
        printf("Search unsuccessfull");

    return 0;
}
