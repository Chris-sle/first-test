#include <stdio.h>

int main() {
    // Enums in C/C++ are a user-defined data type that consists of a set of named integer constants.
    // They help to make the code more readable and maintainable by giving meaningful names to integral values.
    // For example, instead of using arbitrary numbers to represent states or options, you can use enums.

    // Example of enum usage
    enum Color {
        RED,    // 0
        GREEN,  // 1
        BLUE    // 2
    };

    enum Color favoriteColor = GREEN; // Using the enum type

    if (favoriteColor == GREEN) {
        printf("Your favorite color is Green!\n");
    } else {
        printf("Your favorite color is not Green.\n");
    }

    // Example of using enums with specific values
    enum Day {
        SUNDAY = 1,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    enum Day today = WEDNESDAY;

    printf("Today is day number: %d\n", today); // Outputs: Today is day number: 4

    return 0;
}