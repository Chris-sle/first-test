#include <stdio.h>
#include <math.h>

int main() {
    
    // using the math library for square root and power functions
    double a = 9.0; // Example value for square root
    double b = 2.0; // Example value for power
    double squareRoot = sqrt(a); // Calculate square root of a
    double power = pow(a, b); // Calculate a raised to the power of b
    double absoluteValue = fabs(-5.0); // Calculate absolute value of -5.0
    double sineValue = sin(3.14159 / 2); // Calculate sine of 90 degrees (in radians)
    double cosineValue = cos(3.14159); // Calculate cosine of 180 degrees (in radians)
    double tangentValue = tan(3.14159 / 4); // Calculate tangent of 45 degrees (in radians)
    double logarithmValue = log(10.0); // Calculate natural logarithm of 10
    double logarithmBase10Value = log10(100.0); // Calculate base 10 logarithm of 100
    double exponentialValue = exp(1.0); // Calculate e raised to the power of 1
    double ceilValue = ceil(3.14); // Round up to the nearest integer
    double floorValue = floor(3.14); // Round down to the nearest integer
    double roundValue = round(3.14); // Round to the nearest integer
    double maxValue = fmax(3.0, 4.0); // Find the maximum of two values
    double minValue = fmin(3.0, 4.0); // Find the minimum of two values
    double hypotenuseValue = hypot(3.0, 4.0); // Calculate the hypotenuse of a right triangle with sides 3 and 4
    double radians = 3.14159; // Example value in radians
    double degrees = radians * (180.0 / 3.14159); // Convert radians to degrees
    double degreesToRadians = degrees * (3.14159 / 180.0); // Convert degrees to radians
    double cubicRoot = cbrt(27.0); // Calculate the cubic root of 27
    double log2Value = log2(8.0); // Calculate base 2 logarithm of 8
    double factorialValue = tgamma(5.0); // Calculate factorial of 4 (tgamma(n) = (n-1)! for n > 0)
    double modfIntegerPart, modfFractionalPart;
    double modfValue = modf(5.75, &modfIntegerPart); // Split 5.75 into integer and fractional parts

    // Displaying the results
    printf("Square root of %.2f: %.2f\n", a, squareRoot);
    printf("%.2f raised to the power of %.2f: %.2f\n", a, b, power);
    printf("Absolute value of -5.0: %.2f\n", absoluteValue);
    printf("Sine of 90 degrees: %.2f\n", sineValue);
    printf("Cosine of 180 degrees: %.2f\n", cosineValue);
    printf("Tangent of 45 degrees: %.2f\n", tangentValue);
    printf("Natural logarithm of 10: %.2f\n", logarithmValue);
    printf("Base 10 logarithm of 100: %.2f\n", logarithmBase10Value);
    printf("Exponential of 1: %.2f\n", exponentialValue);
    printf("Ceiling of 3.14: %.2f\n", ceilValue);
    printf("Floor of 3.14: %.2f\n", floorValue);
    printf("Rounded value of 3.14: %.2f\n", roundValue);
    printf("Maximum of 3.0 and 4.0: %.2f\n", maxValue);
    printf("Minimum of 3.0 and 4.0: %.2f\n", minValue);
    printf("Hypotenuse of a right triangle with sides 3 and 4: %.2f\n", hypotenuseValue);
    printf("Radians to degrees: %.2f degrees\n", degrees);
    printf("Degrees to radians: %.2f radians\n", degreesToRadians);
    printf("Cubic root of 27: %.2f\n", cubicRoot);
    printf("Base 2 logarithm of 8: %.2f\n", log2Value);
    printf("Factorial of 4: %.2f\n", factorialValue);
    printf("Modf of 5.75: Integer part = %.2f, Fractional part = %.2f\n", modfIntegerPart, modfFractionalPart);
    
    return 0;
}