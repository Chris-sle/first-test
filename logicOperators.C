#include <stdio.h>
#include <stdbool.h>

int main() {
    // A simple program to demonstrate logical operators in C
    bool a = true;
    bool b = false;

    // Using logical AND operator
    if (a && b) {
        printf("Both a and b are true.\n");
    } else {
        printf("At least one of a or b is false.\n");
    }

    // Using logical OR operator
    if (a || b) {
        printf("At least one of a or b is true.\n");
    } else {
        printf("Both a and b are false.\n");
    }

    // Using logical NOT operator
    if (!a) {
        printf("a is false.\n");
    } else {
        printf("a is true.\n");
    }

    // End of the program
    return 0;
}