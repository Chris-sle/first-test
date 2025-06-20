#include <stdio.h>

int main() {
    // Declare and initialize an array of integers
    int numbers[] = {10, 20, 30, 40, 50};
    
    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    // Print the elements of the array
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // Enter user input to modify an element
    int index, newValue;
    printf("Enter the index of the element you want to modify (0 to %d): ", size - 1);
    scanf("%d", &index);
    if (index < 0 || index >= size) {
        printf("Invalid index. Please enter a number between 0 and %d.\n", size - 1);
    } else {
        printf("Enter the new value for element %d: ", index);
        scanf("%d", &newValue);
        numbers[index] = newValue; // Modify the element at the specified index
        printf("Element %d has been updated to %d.\n", index, numbers[index]);
    }

    // Print the updated array
    printf("Updated array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // Calculate the sum of the array elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("Sum of array elements: %d\n", sum);

    // Calculate the average of the array elements
    double average = (double)sum / size;
    printf("Average of array elements: %.2f\n", average);

    // Find the maximum element in the array
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Maximum element in the array: %d\n", max);

    // Find the minimum element in the array
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("Minimum element in the array: %d\n", min);
    // Sort the array in ascending order using a simple bubble sort algorithm

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap the elements
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    // Print the sorted array
    printf("Sorted array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // Find the index of a specific value in the array
    int valueToFind;
    printf("Enter a value to find its index in the array: ");
    scanf("%d", &valueToFind);
    int foundIndex = -1; // Initialize to -1 (not found)
    for (int i = 0; i < size; i++) {
        if (numbers[i] == valueToFind) {
            foundIndex = i; // Update foundIndex if the value is found
            break; // Exit the loop once the value is found
        }
    }
    if (foundIndex != -1) {
        printf("Value %d found at index %d.\n", valueToFind, foundIndex);
    } else {
        printf("Value %d not found in the array.\n", valueToFind);
    }

    // Reverse the array
    for (int i = 0; i < size / 2; i++) {
        // Swap the elements at positions i and size - i - 1
        int temp = numbers[i];
        numbers[i] = numbers[size - i - 1];
        numbers[size - i - 1] = temp;
    }

    // Print the reversed array
    printf("Reversed array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    // 2D Array Example
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("2D Array (Matrix) elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: %d\n", i, j, matrix[i][j]);
        }
    }
    
    // Calculate the sum of the 2D array elements
    int matrixSum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixSum += matrix[i][j];
        }
    }
    printf("Sum of 2D array elements: %d\n", matrixSum);
    
    return 0;
}