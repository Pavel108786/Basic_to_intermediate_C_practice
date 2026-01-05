#include <stdio.h>
#include <string.h>
int main() {
    char line1[1000];
    char line2[1000];
    printf("Enter the first line of text: ");
    fgets(line1, sizeof(line1), stdin);
    printf("Enter the second line of text: ");
    fgets(line2, sizeof(line2), stdin);
    line1[strcspn(line1, "\n")] = '\0';
    line2[strcspn(line2, "\n")] = '\0';
    strcpy(line1, line2);
    printf("First line after copying: %s\n", line1);
    return 0;
}
