#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    int year;
    float price;
};
int main() {
    struct Book book1;
    printf("Enter book title: ");
    fgets(book1.title, sizeof(book1.title), stdin);
    printf("Enter author name: ");
    fgets(book1.author, sizeof(book1.author), stdin);
    printf("Enter publication year: ");
    scanf("%d", &book1.year);
    printf("Enter price: ");
    scanf("%f", &book1.price);

    printf("\n--- Book Details ---\n");
    printf("Title: %s", book1.title);
    printf("Author: %s", book1.author);
    printf("Year: %d\n", book1.year);
    printf("Price: %.2f\n", book1.price);
    return 0;
}
