// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main() {
    int n, x, i, index = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;
            break;
        }
    }

    if(index == -1)
        printf("-1 (Ceil does not exist)\n");
    else
        printf("Index of ceil of %d is %d (Element = %d)\n", x, index, arr[index]);

    return 0;
}