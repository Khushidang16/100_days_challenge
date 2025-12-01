// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

// Define enum for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    // Ask user to enter a role
    printf("Select a role (0: ADMIN, 1: USER, 2: GUEST): ");
    scanf("%d", &role);

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have guest access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
            break;
    }

    return 0;
}
