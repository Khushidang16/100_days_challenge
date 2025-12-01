// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yyyy;

    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    // Validate month range
    if (mm < 1 || mm > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("%02d-%s-%d\n", dd, months[mm - 1], yyyy);

    return 0;
}
