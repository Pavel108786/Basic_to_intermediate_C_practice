#include <stdio.h>
int main() {
    int score;
    char grade;
    printf("Enter the score: ");
    scanf("%d", &score);
    if (score >= 90 && score <= 100)
        grade = 'A';
    else if (score >= 80 && score <= 89)
        grade = 'B';
    else if (score >= 70 && score <= 79)
        grade = 'C';
    else if (score >= 60 && score <= 69)
        grade = 'D';
    else if (score < 60)
        grade = 'F';
    else {
        printf("Invalid score!\n");
        return 1;
    }
    printf("The grade is: %c\n", grade);
    return 0;
}

