// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {

    int num1, num2;
    int sum, diff, product;
    float quotient;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2; 
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}
