// Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, temp, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;                
    digits = (int)log10(num);       
    first = num / pow(10, digits);  
    
    temp = num % (int)pow(10, digits);  
    temp = temp / 10;

    
    int swapped = last * pow(10, digits) + temp * 10 + first;

    printf("Number after swapping first and last digit = %d", swapped);

    return 0;
}