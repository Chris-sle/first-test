#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

void createAccount();
void deposit();
void withdraw();
void checkBalance();
void displayMenu();
void clearScreen();
void handleInvalidInput();
void handleExit();
void handleError(const char *message);

int main() {
    srand((unsigned int)time(NULL)); // Seed the random number generator
    displayMenu();
    return 0;
}

void displayMenu() {
    int choice;
    do {
        clearScreen();
        printf("Welcome to Simple Banking App!\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            handleInvalidInput();
            continue;
        }

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                handleExit();
                break;
            default:
                handleInvalidInput();
                break;
        }
    } while (choice != 5);
}

void createAccount() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Account created successfully for %s!\n", name);
    // In a real application, you would save the account details to a database or file.
    getchar(); // Clear the newline character from the input buffer
    printf("Press Enter to return to the main menu...");
    getchar();
}

void deposit() {
    float amount;
    printf("Enter the amount to deposit: ");
    if (scanf("%f", &amount) != 1 || amount <= 0) {
        handleInvalidInput();
        return;
    }
    printf("Deposited $%.2f successfully!\n", amount);
    // In a real application, you would update the account balance in the database or file.
    getchar(); // Clear the newline character from the input buffer
    printf("Press Enter to return to the main menu...");
    getchar();
}

void withdraw() {
    float amount;
    printf("Enter the amount to withdraw: ");
    if (scanf("%f", &amount) != 1 || amount <= 0) {
        handleInvalidInput();
        return;
    }
    printf("Withdrew $%.2f successfully!\n", amount);
    // In a real application, you would update the account balance in the database or file.
    getchar(); // Clear the newline character from the input buffer
    printf("Press Enter to return to the main menu...");
    getchar();
}

void checkBalance() {
    // In a real application, you would retrieve the account balance from the database or file.
    float balance = (rand() % 10000) / 100.0; // Simulating a random balance for demonstration
    printf("Your current balance is: $%.2f\n", balance);
    getchar(); // Clear the newline character from the input buffer
    printf("Press Enter to return to the main menu...");
    getchar();
}

void clearScreen() {
    // Clear the console screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void handleInvalidInput() {
    printf("Invalid input. Please try again.\n");
    getchar(); // Clear the newline character from the input buffer
    printf("Press Enter to continue...");
    getchar();
}

void handleExit() {
    printf("Thank you for using Simple Banking App. Goodbye!\n");
    exit(0);
}

void handleError(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(EXIT_FAILURE);
}