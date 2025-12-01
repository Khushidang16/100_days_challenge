// Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    // Pointer points to structure
    ptr = &s;

    // Input details using pointer
    printf("Enter student name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Modify marks using pointer
    printf("\nEnter additional marks to add: ");
    float extra;
    scanf("%f", &extra);
    ptr->marks += extra;  // modify marks via pointer

    // Display details using pointer
    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
