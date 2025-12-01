// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int main() {
    int n, target;
    int nums[100];
    int i, first = -1, last = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target to search: ");
    scanf("%d", &target);

    // Find first occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("First Occurrence Index: %d\n", first);
    printf("Last Occurrence Index: %d\n", last);

    return 0;
}
