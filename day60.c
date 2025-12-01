// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>

int main() {
    int n, k, arr[100];
    int i, j, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size!\n");
        return 0;
    }

    printf("Maximum of each subarray: ");

    // Iterate each window
    for (i = 0; i <= n - k; i++) {
        max = arr[i];

        // Find max in current window
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
