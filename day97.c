// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure
struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joiningDate;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Open file for writing in binary mode
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input and write employee details to file
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", emp.name);

        printf("Employee ID: ");
        scanf("%d", &emp.emp_id);

        printf("Salary: ");
        scanf("%f", &emp.salary);

        printf("Joining Date (day month year): ");
        scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

        fwrite(&emp, sizeof(struct Employee), 1, fp);
    }

    fclose(fp);
    printf("\nEmployee data saved to file successfully!\n");

    // Open file for reading in binary mode
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nReading employee data from file:\n");
    for (i = 0; i < n; i++) {
        fread(&emp, sizeof(struct Employee), 1, fp);
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", emp.name);
        printf("Employee ID: %d\n", emp.emp_id);
        printf("Salary: %.2f\n", emp.salary);
        printf("Joining Date: %02d-%02d-%04d\n",
               emp.joiningDate.day,
               emp.joiningDate.month,
               emp.joiningDate.year);
    }

    fclose(fp);
    return 0;
}
