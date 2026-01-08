#include <stdio.h>

// Structs in C/C++ are user-defined data types that allow you to group related variables of different types under a single name.
// They help to organize complex data and make the code more readable and maintainable. 
// Much like objects in OOP, structs can encapsulate multiple data members.
// For example, instead of managing separate variables for a person's name, age, and height, you can define a struct to hold all this information together.

typedef struct {
    char name[50];
    int age;
    float height;
} Person; // Defining a new type 'Person' for a structure

int main() {
    // Creating an instance of the Person struct
    Person person1;

    // Assigning values to the members of the struct
    snprintf(person1.name, sizeof(person1.name), "Alice");
    person1.age = 30;
    person1.height = 5.5;

    // Accessing and printing the members of the struct
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}