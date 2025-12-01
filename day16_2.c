// Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, original, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   

    
    while (num != 0) {
        digit = num % 10;        // get last digit
        rev = rev * 10 + digit;   
        num = num / 10;           
    }

    if (original == rev) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}