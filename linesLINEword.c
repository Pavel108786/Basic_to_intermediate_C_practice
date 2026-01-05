#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    char *ptr;
    int lines = 0, words = 0, characters = 0;
    int totalLength = 0;

    printf("Enter text (end input with Ctrl+D or Ctrl+Z):\n");

    while (fgets(text, sizeof(text), stdin)) {
        ptr = text;
        lines++;
        while (*ptr != '\0') {
            if (isspace(*ptr)) {
                if (ptr != text && !isspace(*(ptr - 1))) {
                    words++;
                }
            }
            characters++;
            ptr++;
        }
        totalLength += (ptr - text);
    }

    if (characters > 0 && !isspace(text[totalLength - 1])) {
        words++;
    }

    printf("\nTotal number of lines: %d\n", lines);
    printf("Total number of words: %d\n", words);
    printf("Total number of characters: %d\n", characters);
    printf("Length of the string: %d\n", totalLength);

    return 0;
}

