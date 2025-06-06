#include <stdio.h>

int main() {
    // User Inputs in C
    int age;
    float height;
    char name[50]; // Array to hold a string (character array)

    // Prompting user for input
    printf("Enter your age: ");
    scanf("%d", &age); // Reading an integer input
    printf("Enter your height in meters: ");
    scanf("%f", &height); // Reading a float input
    printf("Enter your name: ");
    scanf("%s", name); // Reading a string input (character array)

    // Displaying the inputs
    printf("You entered:\n");
    printf("Age: %d\n", age); // Displaying the integer input
    printf("Height: %.2f meters\n", height); // Displaying the float input with 2 decimal places
    printf("Name: %s\n", name); // Displaying the string input

    // Consume the newline character left by scanf
    // When scanf is used to read numerical values, it leaves a stray newline character ('\n') in the input buffer,
    // which can cause fgets to read it immediately, seeming as if it is skipped.
    getchar(); // This will consume the newline character left in the input buffer after the last scanf

    // Note: scanf for strings stops reading at the first whitespace, so it won't read full names with spaces.
    // To read full names with spaces, you can use fgets instead:
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // This reads a line of text including spaces
    printf("Full Name: %s\n", name); // Displaying the full name input
    // Note: Always ensure that the input buffer is large enough to hold the expected input to avoid buffer overflow.

    return 0;
}