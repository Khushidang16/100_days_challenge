// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, original, digit, sum = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   

    
    while (original != 0) {
        n++;
        original = original / 10;   
    }

    original = num;   

    
    while (original != 0) {
        digit = original % 10;        
        sum += pow(digit, n);   
        original = original / 10;           
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}