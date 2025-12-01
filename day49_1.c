// Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    // Print the first character if it's a letter
    if (isalpha(str[0])) {
        printf("%c", toupper(str[0]));
    }

    // Check for spaces and print the next character
    while (str[i] != '\0') {
        if (str[i] == ' ' && isalpha(str[i + 1])) {
            printf("%c", toupper(str[i + 1]));
        }
        i++;
    }

    return 0;
}
