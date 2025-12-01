// Print all enum names and integer values using a loop.
#include <stdio.h>

// Define enum for colors
enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

int main() {
    enum Colors c;
    const char *colorNames[] = {"RED", "GREEN", "BLUE", "YELLOW", "ORANGE"};

    printf("Enum names and their integer values:\n");

    // Loop through enum values
    for (c = RED; c <= ORANGE; c++) {
        printf("%s = %d\n", colorNames[c], c);
    }

    return 0;
}
