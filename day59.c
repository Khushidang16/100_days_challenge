// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k, arr[100];
    int i, currentSum = 0, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid! k cannot be greater than array size.\n");
        return 0;
    }

    // Find sum of first window
    for (i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    maxSum = currentSum;

    // Slide the window
    for (i = k; i < n; i++) {
        currentSum = currentSum + arr[i] - arr[i - k];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of subarrays of size %d = %d\n", k, maxSum);

    return 0;
}
