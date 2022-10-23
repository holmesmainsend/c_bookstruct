#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[50];
    char author[50];
    int publicationYear;
    int pageCount;
    double rating;
};

int main() {
    struct Book book1;
    book1.pageCount = 328;
    book1.rating = 4.1;
    strcpy(book1.author, "Hemingway");
    strcpy(book1.title, "The Sun Also Rises");

    return 0;
}