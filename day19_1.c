// Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, lcm, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Start from the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Find LCM
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is: %d", num1, num2, lcm);

    return 0;
}