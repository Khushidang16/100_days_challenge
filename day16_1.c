// Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, i, binary[32], index = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary = 0");
        return 0;
    }

    while (num > 0) {
        binary[index] = num % 2;  
        num = num / 2;        
        index++;
    }

    printf("Binary = ");

    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}
