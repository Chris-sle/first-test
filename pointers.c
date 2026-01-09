#include <stdio.h>

// Pointers in C/C++ are a variable type that stores the memory address of another variable.
// Benefit: They help avoid wasting memory by allowing you to pass the address of a large data structure instead of copying the entire data.

int main() {
    int variabel = 42;          // Declare an integer variable
    int *pointer = &variabel;      // Declare a pointer variable and assign it the address of 'variabel'

    // Print the value of 'variabel' using the pointer
    printf("Value of variabel: %d\n", *pointer);

    // Print the address of 'variabel' and the value of the pointer
    printf("Address of variabel: %p\n", (void*)&variabel);
    printf("Value of pointer (address of variabel): %p\n", (void*)pointer);

    // Modify the value of 'variabel' using the pointer
    *pointer = 100;
    printf("New value of variabel after modification through pointer: %d\n", variabel);
    return 0;
}