// Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    // Toggle case
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // convert lowercase to uppercase
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // convert uppercase to lowercase
        }
        i++;
    }

    printf("String after toggling case: %s\n", str);

    return 0;
}