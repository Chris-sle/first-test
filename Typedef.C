#include <stdio.h>

int main() {
    // Typedef in C/C++ is a reservered keyword that gives an existing datatype a "nickname" or alias.
    // It allows you to create a new name for an existing data type, making the code more readable and easier to maintain.
    // For example, instead of writing 'int' everywhere, you can define a new type like 'Integer'.

    // Example of typedef usage
    typedef int Integer; // Defining a new type 'Integer' as an alias for 'int'
    
    Integer a = 5; // Using the new type
    Integer b = 10;
    
    Integer sum = a + b; // Using the typedef type in operations
    printf("The sum of %d and %d is: %d\n", a, b, sum);
    
    // Example of using typedef with structures
    typedef struct {
        int x;
        int y;
    } Point; // Defining a new type 'Point' for a structure
    
    Point p1 = {3, 4}; // Creating an instance of Point
    printf("Point p1 has coordinates (%d, %d)\n", p1.x, p1.y);
    
    return 0;
}