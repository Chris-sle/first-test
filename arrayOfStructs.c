#include <stdio.h>

// array of structs in C/C++ allows you to create an array where each element is a struct.
// This is useful for managing collections of related data, such as a list of students, employees, or products.
// By using an array of structs, you can easily organize and manipulate multiple instances of complex data types.

typedef struct {
    char model[25];
    int year;
    float price;
} car; // Defining a new type 'car' for a structure

int main() {
    // Create an array of car structs
    car cars[3] = {
        {"Toyota Camry", 2020, 24425.00},
        {"Honda Accord", 2019, 23720.00},
        {"Ford Mustang", 2021, 27155.00}
    };

    // Print the details of each car in the array
    int numberOfCars = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < numberOfCars; i++) {
        printf("Model: %s, Year: %d, Price: %.2f\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}