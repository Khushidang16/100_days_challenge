// Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Print all substrings
    for (i = 0; str[i] != '\0'; i++) {            // Starting index
        for (j = i; str[j] != '\0'; j++) {        // Ending index
            for (k = i; k <= j; k++) {            // Print substring
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
