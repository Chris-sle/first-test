#include <stdio.h>
#include <string.h>

int main() {
    // Array of strings
    const char *strings[] = {
        "Hello, World!",
        "C programming is fun.",
        "Arrays of strings are useful.",
        "This is a simple example.",
        "Goodbye!"
    };

    // Calculate the size of the array
    int size = sizeof(strings) / sizeof(strings[0]);

    // Print the elements of the array
    printf("Array of strings:\n");
    for (int i = 0; i < size; i++) {
        printf("String %d: %s\n", i, strings[i]);
    }

    // Find the longest string
    const char *longestString = strings[0];

    for (int i = 1; i < size; i++) {
        if (strlen(strings[i]) > strlen(longestString)) {
            longestString = strings[i];
        }
    }

    printf("Longest string: %s\n", longestString);
    printf("Length of longest string: %zu\n", strlen(longestString));

    // Find the shortest string
    const char *shortestString = strings[0];

    for (int i = 1; i < size; i++) {
        if (strlen(strings[i]) < strlen(shortestString)) {
            shortestString = strings[i];
        }
    }

    printf("Shortest string: %s\n", shortestString);
    printf("Length of shortest string: %zu\n", strlen(shortestString));

    // Concatenate all strings into a single string
    char concatenated[256] = "";

    for (int i = 0; i < size; i++) {
        strcat(concatenated, strings[i]);
        if (i < size - 1) {
            strcat(concatenated, " "); // Add space between strings
        }
    }

    printf("Concatenated string: %s\n", concatenated);
    printf("Length of concatenated string: %zu\n", strlen(concatenated));

    // Count the number of occurrences of a specific character in all strings
    char character;

    printf("Enter a character to count its occurrences in all strings: ");
    scanf(" %c", &character);

    int count = 0;
    for (int i = 0; i < size; i++) {
        for (const char *p = strings[i]; *p != '\0'; p++) {
            if (*p == character) {
                count++;
            }
        }
    }

    printf("Character '%c' occurs %d times in all strings.\n", character, count);

    // Find the index of a specific string
    char searchString[256];

    printf("Enter a string to find its index in the array: ");
    scanf(" %[^\n]", searchString); // Read a line of text including spaces

    int foundIndex = -1; // Initialize to -1 (not found)

    for (int i = 0; i < size; i++) {
        if (strcmp(strings[i], searchString) == 0) {
            foundIndex = i; // Update foundIndex if the string is found
            break; // Exit the loop once the string is found
        }
    }

    if (foundIndex != -1) {
        printf("String '%s' found at index %d.\n", searchString, foundIndex);
    } else {
        printf("String '%s' not found in the array.\n", searchString);
    }

    // Sort the array of strings alphabetically
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                // Swap the strings
                const char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array of strings:\n");
    for (int i = 0; i < size; i++) {
        printf("String %d: %s\n", i, strings[i]);
    }

    // Reverse the array of strings
    for (int i = 0; i < size / 2; i++) {
        // Swap the strings at positions i and size - i - 1
        const char *temp = strings[i];
        strings[i] = strings[size - i - 1];
        strings[size - i - 1] = temp;
    }
    
    printf("Reversed array of strings:\n");
    for (int i = 0; i < size; i++) {
        printf("String %d: %s\n", i, strings[i]);
    }

    // Change or update a specific string in the array
    int indexToUpdate;

    printf("Enter the index of the string you want to update (0 to %d): ", size - 1);
    scanf("%d", &indexToUpdate);

    if (indexToUpdate < 0 || indexToUpdate >= size) {
        printf("Invalid index. No changes made.\n");
    } else {
        char newString[256];
        printf("Enter the new string: ");
        scanf(" %[^\n]", newString); // Read a line of text including spaces
        strings[indexToUpdate] = strdup(newString); // Update the string at the specified index
        printf("String at index %d updated successfully.\n", indexToUpdate);
    }

    printf("Updated array of strings:\n");
    for (int i = 0; i < size; i++) {
        printf("String %d: %s\n", i, strings[i]);
    }

    printf("Press Enter to exit...");
    getchar(); // Clear the newline character from the input buffer
    getchar(); // Wait for user input before exiting
    printf("Exiting the program.\n");

    return 0;
}