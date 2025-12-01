// Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n+1];  // extra space for new element

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find correct position for key
    for(pos = 0; pos < n; pos++) {
        if(arr[pos] > key)
            break;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert key
    arr[pos] = key;
    n++;  // new size

    // Print updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}