// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, maxLen = 0, len;
    int flag;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    len = strlen(s);

    // Check all substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            flag = 1;

            // Check if substring s[i..j] has repeating characters
            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    flag = 0;
                    break;
                }
            }

            if (flag) {
                if (j - i + 1 > maxLen)
                    maxLen = j - i + 1;
            } else {
                break; // Stop checking further extension of this substring
            }
        }
    }

    printf("Length of longest substring without repeating characters = %d\n", maxLen);

    return 0;
}
