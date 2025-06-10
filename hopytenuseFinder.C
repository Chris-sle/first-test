#include <stdio.h>
#include <math.h>

int main() {

    // Program to find the hypotenuse of a right triangle using the Pythagorean theorem
    double a, b, hypotenuse;

    // Prompt user for the lengths of the two sides
    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    printf("Enter the length of side b: ");
    scanf("%lf", &b);

    // Check if the sides are positive
    if (a <= 0 || b <= 0) {
        printf("Sides must be positive numbers.\n");
        return 1; // Exit with an error code
    }

    // Calculate the hypotenuse using the Pythagorean theorem: c = sqrt(a^2 + b^2)
    hypotenuse = sqrt(a * a + b * b);

    // Display the result
    printf("The length of the hypotenuse is: %.2f\n", hypotenuse);

    return 0;
}