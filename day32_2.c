// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int num, digit;
    int count[10] = {0}; // to count digits 0-9

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) num = -num; // handle negative numbers

    // Count digits
    while(num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find digit with max count
    int max = count[0], mostDigit = 0;
    for(int i = 1; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            mostDigit = i;
        }
    }

    printf("Digit that occurs most: %d (occurs %d times)\n", mostDigit, max);

    return 0;
}
