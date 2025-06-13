#include <stdio.h>

// Function declarations
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 or handle error appropriately
    }
    return a / b;
}
int findMax(int a, int b) {
    return (a > b) ? a : b; // Using the ternary operator to find the maximum
}

int main() {
    
    // A simple program to demonstrate functions, arguments, return values and ternary operator in C
    
    // Function declaration
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);
    int findMax(int a, int b); 

    // Variable declarations
    int num1, num2, result;
    char operation;

    // Displaying the menu
    printf("Simple Calculator\n");
    printf("Choose an operation:\n");
    printf(" + : Addition\n");
    printf(" - : Subtraction\n");
    printf(" * : Multiplication\n");
    printf(" / : Division\n");
    printf(" < : Find Maximum\n");
    printf("Enter your choice (+, -, *, /, <): ");
    scanf(" %c", &operation); // Read the operation and ignore leading whitespace
    printf("Enter first number: ");
    scanf("%d", &num1); // Read the first number
    printf("Enter second number: ");
    scanf("%d", &num2); // Read the second number

    // Perform the operation based on user input
    switch (operation) {
        case '+':
            result = add(num1, num2);
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            result = divide(num1, num2);
            if (num2 != 0) {
                printf("%d / %d = %d\n", num1, num2, result);
            }
            break;
        case '<':
            result = findMax(num1, num2);
            printf("Maximum of %d and %d is %d\n", num1, num2, result);
            break;
        default:
            printf("Invalid operation! Please choose +, -, *, or /.\n");
    }
    // End of the program
    return 0;
}