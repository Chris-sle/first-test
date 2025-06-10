#include <stdio.h>
#include <ctype.h>

int main() {
    // Temperature Conversion Program
    float celsius, fahrenheit;
    char choice;

    printf("Temperature Conversion Program\n");
    printf("Choose conversion type:\n");
    printf("1. Celsius to Fahrenheit (C)\n");
    printf("2. Fahrenheit to Celsius (F)\n");
    printf("Enter your choice (C/F): ");
    
    // Read the user's choice and convert it to uppercase
    scanf(" %c", &choice);
    choice = toupper(choice);

    if (choice == 'C') {
        // Celsius to Fahrenheit conversion
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
    } else if (choice == 'F') {
        // Fahrenheit to Celsius conversion
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
    } else {
        printf("Invalid choice! Please enter 'C' or 'F'.\n");
    }

    return 0;
}