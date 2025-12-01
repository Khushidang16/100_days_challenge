// Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit % 2 != 0) {   
            product = product * digit;
            foundOdd = 1;
        }

        num = num / 10;
    }

    if (foundOdd == 0)
        printf("No odd digits found.");
    else
        printf("Product of odd digits = %lld", product);

    return 0;
}
