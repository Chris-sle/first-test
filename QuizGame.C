#include <stdio.h>
#include <string.h>

int main() {
    //Quiz Game
    const char *questions[] = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "What is the largest planet in our solar system?"
    };

    const char *answers[] = {
        "Paris",
        "4",
        "Jupiter"
    };

    int size = sizeof(questions) / sizeof(questions[0]);
    int score = 0;
    char userAnswer[50];

    printf("Welcome to the Quiz Game!\n");
    for (int i = 0; i < size; i++) {
        printf("Question %d: %s\n", i + 1, questions[i]);
        printf("Your answer: ");
        scanf(" %[^\n]", userAnswer); // Read a line of text including spaces

        if (strcmp(userAnswer, answers[i]) == 0) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer is: %s\n", answers[i]);
        }
    }
    printf("Your total score is: %d out of %d\n", score, size);
    printf("Thank you for playing the Quiz Game!\n");
    printf("Press Enter to exit...");
    getchar(); // Wait for user to press Enter
    getchar(); // Clear the newline character from the input buffer
    printf("Exiting the program.\n");

    return 0;
}