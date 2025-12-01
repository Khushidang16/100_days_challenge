// Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[200];
    char longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {

        if (str[i] != ' ') { 
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;

                // Copy the longest word found
                for (j = 0; j < currLen; j++) {
                    longest[j] = str[start + j];
                }
                longest[currLen] = '\0';
            }
            currLen = 0;          
            start = i + 1;        
        }
        i++;
    }

    // Check last word (in case sentence doesn't end with a space)
    if (currLen > maxLen) {
        maxLen = currLen;
        for (j = 0; j < currLen; j++) {
            longest[j] = str[start + j];
        }
        longest[currLen] = '\0';
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
