#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);
    int count[4] = {0};
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '1'){
            count[1]++;
        } else if (s[i] == '2') {
            count[2]++;
        } else if (s[i] == '3') {
            count[3]++;
        }
    }
    int first = count[1];
    int second = count[2];
    int third = count[3];  
    for (int i = 0; i < first; i++) {
        printf("1");
        if (i < first + second + third - 1) {
            printf("+");
        }
    }
    for (int i = 0; i < second; i++) {
        printf("2");
        if (i < second + third - 1) {
            printf("+");
        }
    }
    for (int i = 0; i < third; i++) {
        printf("3");
        if (i < third - 1) {
            printf("+");
        }
    }
    
    printf("\n");
    
    return 0;
}
