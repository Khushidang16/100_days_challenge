// Reverse each word in a sentence without changing the word order.
#include <stdio.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {

        if (str[i] == ' ') {
            // reverse current word
            reverseWord(str, start, i - 1);
            start = i + 1;   // next word begins after space
        }
        i++;
    }

    // reverse the last word (no space at end)
    reverseWord(str, start, i - 1);

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}
