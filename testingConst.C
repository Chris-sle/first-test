#include <stdio.h>

int main() {

    // Constants in C
    const int MAX_USERS = 100; // constant integer
    const float PI = 3.14159f; // constant float
    const char NEWLINE = '\n'; // constant character

    printf("Max Users: %d\n", MAX_USERS);
    printf("Value of PI: %.5f\n", PI);
    printf("Newline character: %c", NEWLINE);

    // Attempting to modify a constant will result in a compilation error
    // MAX_USERS = 200; // Uncommenting this line will cause an error

    return 0;
}