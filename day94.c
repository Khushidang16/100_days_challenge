// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

// Define structure for Book
struct Book {
    char title[50];
    char author[50];
    int pages;
};

// Function to print book details
void printBook(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Pages: %d\n", b.pages);
}

int main() {
    struct Book b1;

    // Input book details
    printf("Enter book title: ");
    scanf("%s", b1.title);

    printf("Enter author name: ");
    scanf("%s", b1.author);

    printf("Enter number of pages: ");
    scanf("%d", &b1.pages);

    printf("\nBook Details:\n");
    // Call function to print book
    printBook(b1);

    return 0;
}
