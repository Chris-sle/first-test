#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getPlayerChoice();
void checkWinner(int playerChoice, int computerChoice);

int main() {
    // Rock Paper Scissors Game
    srand((unsigned int)time(NULL)); // Seed the random number generator

    const char *choices[] = {"Rock", "Paper", "Scissors"};
    int playerChoice, computerChoice;

    // Display the game instructions and choices
    printf("Welcome to Rock Paper Scissors!\n");
    printf("Choose:\n");
    printf("1: Rock\n");
    printf("2: Paper\n");
    printf("3: Scissors\n");
    printf("Enter your choice (1-3): ");
    // Get player's choice
    playerChoice = getPlayerChoice();
    
    // Generate computer's choice
    computerChoice = getComputerChoice();

    // Determine the winner
    printf("You chose: %s\n", choices[playerChoice - 1]);
    printf("Computer chose: %s\n", choices[computerChoice - 1]);
    checkWinner(playerChoice, computerChoice);
    
    printf("Thank you for playing!\n");
    printf("Goodbye!\n");

    return 0;
}

int getComputerChoice(){
    return (rand() % 3) + 1; // Generate a random choice (1-3) for the computer
}
int getPlayerChoice(){
    int choice;
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    
    // Validate player input
    do {
        if (choice < 1 || choice > 3) {
            printf("Invalid choice. Please enter a number between 1 and 3: ");
            scanf("%d", &choice);
        }
    } while (choice < 1 || choice > 3);
    
    return choice;
}

void checkWinner(int playerChoice, int computerChoice){
    if (playerChoice == computerChoice) {
        printf("It's a tie! You both chose %s.\n", (computerChoice == 1) ? "Rock" : (computerChoice == 2) ? "Paper" : "Scissors");
    } else if ((playerChoice == 1 && computerChoice == 3) || 
               (playerChoice == 2 && computerChoice == 1) || 
               (playerChoice == 3 && computerChoice == 2)) {
        printf("You win! %s beats %s.\n", (playerChoice == 1) ? "Rock" : (playerChoice == 2) ? "Paper" : "Scissors", 
               (computerChoice == 1) ? "Rock" : (computerChoice == 2) ? "Paper" : "Scissors");
    } else {
        printf("You lose! %s loses to %s.\n", (playerChoice == 1) ? "Rock" : (playerChoice == 2) ? "Paper" : "Scissors", 
               (computerChoice == 1) ? "Rock" : (computerChoice == 2) ? "Paper" : "Scissors");
    }
}