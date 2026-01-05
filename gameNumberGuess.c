#include <stdio.h>
int main() {
    int secretNumber = 15;
    int userGuess;
    int attempts = 0;
    do {
        printf("Guess the secret number (between 1 and 20): ");
        scanf("%d", &userGuess);
        attempts++;
        if (userGuess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (userGuess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        }
    } while (userGuess != secretNumber);
    printf("You made %d attempts in total.\n", attempts);
    return 0;
}
