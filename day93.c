// Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, highestIndex = 0;

    // Input details for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Find the student with highest marks
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[highestIndex].marks) {
            highestIndex = i;
        }
    }

    // Print the student with highest marks
    printf("Student with the highest marks:\n");
    printf("Name: %s\n", s[highestIndex].name);
    printf("Roll Number: %d\n", s[highestIndex].roll_no);
    printf("Marks: %.2f\n", s[highestIndex].marks);

    return 0;
}
