// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int countS[26] = {0}, countT[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    // If lengths differ, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of each character in s
    for (i = 0; s[i] != '\0'; i++) {
        countS[s[i] - 'a']++;
        countT[t[i] - 'a']++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (countS[i] != countT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
