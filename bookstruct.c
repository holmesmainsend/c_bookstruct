#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char titleNoSpaces[50];
    char authorLastName[50];
    int publicationYear;
    int pageCount;
    double rating;
};

int main() {
    struct Book book1;
    book1.pageCount = 328;
    book1.rating = 4.1;
    strcpy(book1.authorLastName, "Hemingway");
    strcpy(book1.titleNoSpaces, "TheSunAlsoRises");

    struct Book book2;
    book2.pageCount = 204;
    book2.rating = 3.6;
    strcpy(book2.authorLastName, "Salinger");
    strcpy(book2.titleNoSpaces, "TheCatcherInTheRye");

    printf("%s\n", book2.authorLastName);

    return 0;
}