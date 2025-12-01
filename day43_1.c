// Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, length = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    // Calculate length of string (excluding newline)
    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    for(i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
