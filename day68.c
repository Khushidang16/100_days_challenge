// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n, arr[100], i;
    int sumArray = 0, totalSum, missing;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements (0 to %d except one missing): ", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sumArray += arr[i];
    }

    // Total sum of 0 to n
    totalSum = n * (n + 1) / 2;

    missing = totalSum - sumArray;

    printf("Missing number is %d\n", missing);

    return 0;
}
