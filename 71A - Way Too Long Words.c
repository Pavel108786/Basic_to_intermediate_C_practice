//71A - Way Too Long Words
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char word[101];  // Max length of word is 100 + 1 for null terminator
    
    scanf("%d", &n); // Read number of words
    
    for (int i = 0; i < n; i++) {
        scanf("%s", word);  // Read one word
        
        int len = strlen(word);
        if (len > 10) {
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        } else {
            printf("%s\n", word);
        }
    }

    return 0;
}
