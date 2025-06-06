#include <stdio.h>

int main() {
    // Arithmetic Operations in C
    int a = 10, b = 5;
    int sum = a + b; // Addition
    int difference = a - b; // Subtraction
    int product = a * b; // Multiplication
    float quotient = (float)a / b; // Division (cast to float for decimal result)
    int remainder = a % b; // Modulus

    // Augmented Assignment Operators
    a += 2; // Equivalent to a = a + 2
    b *= 3; // Equivalent to b = b * 3
    sum += a; // Equivalent to sum = sum + a
    difference -= b; // Equivalent to difference = difference - b
    product *= 2; // Equivalent to product = product * 2
    quotient /= 2; // Equivalent to quotient = quotient / 2
    remainder %= 3; // Equivalent to remainder = remainder % 3
    
    // Output the results
    printf("After arithmetic operations:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient); // %.2f for 2 decimal places
    printf("Remainder: %d\n", remainder);

    return 0;
}