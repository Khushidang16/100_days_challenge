// Write a program to print the following pattern:
// *****
// ****
//  ***
//   **
//    *
#include <stdio.h>
int main() {
    int i, j, space;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        for (j = rows - i + 1; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}