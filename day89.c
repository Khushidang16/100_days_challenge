// Show that enums store integers by printing assigned values.
#include <stdio.h>

// Define enum for weekdays with explicit and default values
enum Weekday {
    MONDAY = 1,   // explicitly assigned
    TUESDAY,      // automatically 2
    WEDNESDAY = 5,// explicitly assigned
    THURSDAY,     // automatically 6
    FRIDAY        // automatically 7
};

int main() {
    printf("Enum members and their integer values:\n");
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);

    return 0;
}
