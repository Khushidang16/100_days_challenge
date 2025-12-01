// Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, i, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n;  // handle k > n
    int temp[k];

    // Store last k elements in temp
    for(i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    // Shift remaining elements to the right
    for(i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];

    // Copy k elements from temp to the beginning
    for(i = 0; i < k; i++)
        arr[i] = temp[i];

    // Print rotated array
    printf("Array after rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
