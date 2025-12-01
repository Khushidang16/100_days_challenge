// Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    // Convert lowercase to uppercase
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // subtract 32 to convert
        }
        i++;
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}
