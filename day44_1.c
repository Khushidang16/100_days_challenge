// Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    while(str[i] != '\0' && str[i] != '\n') {
        ch = str[i];

        if(ch == ' ') {
            spaces++;
        } 
        else if(ch >= '0' && ch <= '9') {
            digits++;
        } 
        else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // do nothing, letters are ignored
        } 
        else {
            special++;
        }

        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
