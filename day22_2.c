// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 1;

    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        numerator += 2;    // next odd number
        denominator += 2;  // next even number
    }

    printf("Sum of the series = %.2lf", sum);

    return 0;
}
