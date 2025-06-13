#include <stdio.h>
#include <stdbool.h>

void hello(char[], int) ; // Function prototype
// Without a function prototype, the compiler would not know about the function 'hello' before it is called in main.
// Function prototype is a declaration of a function that specifies the function's name, return type, and parameters.
// Function prototypes are useful for informing the compiler about the function's existence before its actual definition.
// This allows the function to be called before it is defined in the code.
// If not used, 
// the compiler may do things like assuming the function returns an int type, which can lead to errors or unexpected behavior.


int main() {
    // A simple program to demonstrate function prototypes in C
    
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