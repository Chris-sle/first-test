#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand((unsigned int)time(NULL));

    int min = 1, max = 100;
    int targetNumber = (rand() % (max - min + 1)) + min; // Generate random number in the range [min, max]
    int guess = 0;

    printf("Welcome to Guess the Number!\n");
    printf("I have selected a number between %d and %d. Try to guess it!\n", min, max);

    while (guess != targetNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < targetNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > targetNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number: %d\n", targetNumber);
        }
    }

    return 0;
}