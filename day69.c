// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n, arr[100], i;
    int result = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements (numbers from 1 to n-1, one repeated): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // XOR all array elements
    for (i = 0; i < n; i++) {
        result ^= arr[i];
    }

    // XOR numbers from 1 to n-1
    for (i = 1; i <= n - 1; i++) {
        result ^= i;
    }

    printf("Repeated element is %d\n", result);

    return 0;
}
