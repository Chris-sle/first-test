#include <stdio.h>
#include <math.h>

int main() {
    // Program to calculate the circumference of a circle
    const double PI = 3.141592653589793; // constant for Pi
    double radius;
    double circumference;
    double area;

    // Prompt user for the radius of the circle
    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &radius); // Read the radius from user input1

    // Check if the radius is negative
    if (radius < 0) {
        printf("Radius cannot be negative. Please enter a valid radius.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate circumference of the circle using the formula: C = 2 * PI * radius
    circumference = 2 * PI * radius;
    // Calculate area of the circle using the formula: A = PI * radius^2
    area = PI * radius * radius;

    // Display the result
    printf("Circumference of the circle with radius %.2f: %.2f\n", radius, circumference);
    printf("Area of the circle with radius %.2f: %.2f\n", radius, area);

    return 0;
}