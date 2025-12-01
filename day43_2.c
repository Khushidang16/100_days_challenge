// Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    // Calculate length of string (excluding newline)
    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check for palindrome
    for(i = 0, j = length - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
