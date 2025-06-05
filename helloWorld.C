#include <stdio.h>

int main() {

    // Single line comment

    printf("Hello, World!\n");

    // Multi-line comment:
    /* escape sequence: 
        \n = newline
        \t = tab (spacing)
    */
   printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n"); // prints numbers with tab spacing

    // variables in C
    int x; //declaration of an integer variable
    x = 10; // initialization of the variable
    int y = 20; // declaration and initialization in one line
    int sum = x + y; // calculating the sum of x and y

    int age = 21; // integer
    float gpa = 3.5; // floating point number
    char grade = 'A'; // single character
    char name[] = "John Doe"; // string (array of characters)

    printf("Sum of %d and %d is %d\n", x, y, sum);
    printf("Age: %d, GPA: %.1f, Grade: %c, Name: %s\n", age, gpa, grade, name);


    
    return 0;
}