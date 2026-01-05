#include <stdio.h>

int main() {
    char str[100], ch;
    int i, vowel, consonant, small, capital, digit, word, other;
    
    i = vowel = consonant = small = capital = digit = word = other = 0;

    printf("Enter the line: ");
    fgets(str, sizeof(str), stdin);

    while ((ch = str[i]) != '\0' && ch != '\n') {
        if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
            (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
            vowel++;
        } 
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            consonant++; // 
        }

        if (ch >= 'A' && ch <= 'Z') {
            capital++;
        } 
        else if (ch >= 'a' && ch <= 'z') {
            small++;
        } 
        else if (ch >= '0' && ch <= '9') {
            digit++;
        } 
        else if (ch == ' ') {
            word++;
        } 
        else {
            other++;
        }

        i++;
    }

    // If there's at least one word, increase word count by 1
    if (i > 0) {
        word++;
    }

    printf("The number of capital letters is: %d\n", capital);
    printf("The number of small letters is: %d\n", small);
    printf("The number of words is: %d\n", word);
    printf("The number of digits is: %d\n", digit);
    printf("The number of other characters is: %d\n", other);
    printf("The number of vowels is: %d\n", vowel);
    printf("The number of consonants is: %d\n", consonant - vowel); // Excluding vowels from consonants

    return 0;
}
