// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>

int main() {
    int n, nums[100];
    int i, j, count;
    int majority = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Check each element's frequency
    for (i = 0; i < n; i++) {
        count = 1;

        // Count frequency of nums[i]
        for (j = i + 1; j < n; j++) {
            if (nums[j] == nums[i])
                count++;
        }

        // Majority element must appear > n/2 times
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("Majority Element: %d\n", majority);

    return 0;
}
