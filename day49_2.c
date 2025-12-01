// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, start = 0, len;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Remove trailing newline if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Find last space position (start of surname)
    int lastSpace = -1;
    for (i = 0; i < len; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    // Print initials for all names except surname
    for (i = 0; i < lastSpace; i++) {
        if (i == 0 && isalpha(str[i])) {
            printf("%c. ", toupper(str[i]));
        }
        else if (str[i] == ' ' && isalpha(str[i+1])) {
            printf("%c. ", toupper(str[i+1]));
        }
    }

    // Print surname in full
    printf("%s", str + lastSpace + 1);

    return 0;
}
