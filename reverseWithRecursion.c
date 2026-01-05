#include <stdio.h>

void reverseSentence();

int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    // Base case: Stop recursion when newline character is encountered
    if (c != '\n') {
        reverseSentence(); // Recursive call
        printf("%c", c);   
    }
}
