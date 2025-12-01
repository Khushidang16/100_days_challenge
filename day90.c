// Define a struct with enum Gender and print person's gender.
#include <stdio.h>

// Define enum for gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define a struct for Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    // Create a person
    struct Person p1;

    // Input person details
    printf("Enter name: ");
    scanf("%s", p1.name);

    printf("Enter age: ");
    scanf("%d", &p1.age);

    printf("Select gender (0: MALE, 1: FEMALE, 2: OTHER): ");
    scanf("%d", (int*)&p1.gender); // cast to int* for safe input

    // Array to map enum to strings
    const char *genderNames[] = {"MALE", "FEMALE", "OTHER"};

    // Print person details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: %s\n", genderNames[p1.gender]);

    return 0;
}