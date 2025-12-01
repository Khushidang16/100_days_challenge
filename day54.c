// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n, x;
    int leftSum, rightSum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {

        // Calculate left sum: 1 to x
        leftSum = x * (x + 1) / 2;

        // Calculate right sum: x to n
        rightSum = (n * (n + 1) / 2) - ((x - 1) * x / 2);

        if (leftSum == rightSum) {
            printf("Pivot Integer: %d\n", x);
            return 0;
        }
    }

    printf("-1\n"); // No pivot integer found
    return 0;
}
