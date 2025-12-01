// Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i;
    int freq[26] = {0}; // frequency array for 'a' to 'z'

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++; // increase frequency
            if(freq[str[i] - 'a'] == 2) { // first time it repeats
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}
