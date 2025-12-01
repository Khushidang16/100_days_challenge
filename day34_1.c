// Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, pos, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];  // extra space for new element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return 0;
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Shift elements to the right
    for(i = n; i >= pos; i--)
        arr[i] = arr[i-1];

    // Insert key
    arr[pos-1] = key;
    n++;  // new size

    // Print updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
