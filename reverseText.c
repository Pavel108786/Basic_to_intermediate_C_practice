#include <stdio.h>
#include <string.h>

int main() {
    char text[1000]; 
    int length, i;
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    length = strlen(text);
    printf("Length of the line: %d\n", length);
    printf("Reversed line: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(text[i]);
    }
    printf("\n");

    return 0;
}
