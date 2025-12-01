// Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    while(str[i] != '\0' && str[i] != '\n') {
        ch = str[i];

        // Check for alphabetic characters
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Check for vowels
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ||
               ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
