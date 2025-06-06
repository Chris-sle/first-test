#include <stdio.h>

int main() {
    // Arithmetic Operations in C
    int a = 10, b = 5;
    int sum = a + b; // Addition
    int difference = a - b; // Subtraction
    int product = a * b; // Multiplication
    float quotient = (float)a / b; // Division (cast to float for decimal result)
    int remainder = a % b; // Modulus

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient); // %.2f for 2 decimal places
    printf("Remainder: %d\n", remainder);

    return 0;
}