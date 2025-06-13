#include <stdio.h>
#include <stdbool.h>

void hello(char[], int) ; // Function prototype



int main() {
    // A simple program to demonstrate function prototypes in C
    // WHAT IS IT?
    // Function declarations, w/o body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES:
    // Many C compilers do not check the number of arguments passed to a function.
    // If a function is called with the wrong number of arguments, it may lead to undefined behavior.
    // A functiono prototype causes the compiler to flag an error if arguments are missing.
    
    char name[] = "Chris";
    int age = 35;

    // hello(name); <- This line is incorrect because the function expects two arguments
    // Uncommenting the line below will cause a compilation error

    hello(name, age); // Function call with two arguments

    return 0;
}

void hello(char name[], int age) {
    // Function definition
    printf("Hello, my name is %s and I am %d years old.\n", name, age);
}