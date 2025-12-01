// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main() {
    int n, arr[100];
    int i, currentSum, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    currentSum = maxSum = arr[0];

    for (i = 1; i < n; i++) {
        // Either start new subarray at arr[i] or extend current subarray
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum = %d\n", maxSum);

    return 0;
}
