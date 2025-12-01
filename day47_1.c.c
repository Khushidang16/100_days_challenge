// Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    printf("Enter first string (lowercase letters only): ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string (lowercase letters only): ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Count frequency of characters in first string
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z') {
            freq1[str1[i] - 'a']++;
        }
    }

    // Count frequency of characters in second string
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z') {
            freq2[str2[i] - 'a']++;
        }
    }

    // Compare frequency arrays
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");

    return 0;
}
