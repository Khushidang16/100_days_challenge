// Assign explicit values starting from 10 and print them.
#include <stdio.h>

// Define an enum for example colors with explicit values
enum Colors {
    RED = 10,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);
    printf("YELLOW = %d\n", YELLOW);

    return 0;
}
