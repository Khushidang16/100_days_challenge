// Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, original, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;     
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;     
        num = num / 10;       
    }
    if (sum == original)
        printf("%d is a strong number.", original);
    else
        printf("%d is not a strong number.", original);

    return 0;
}
