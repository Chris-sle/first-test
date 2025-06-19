#include <stdio.h>

int main() {
    // Looping through numbers 1 to 10
    for (int i = 1; i <= 10; ++i) {
        printf("Number: %d\n", i);
    }

    // Using a while loop to print even numbers from 2 to 20
    int j = 2;
    while (j <= 20) {
        printf("Even Number: %d\n", j);
        j += 2;
    }

    // Using a do-while loop to print odd numbers from 1 to 19
    int k = 1;
    do {
        printf("Odd Number: %d\n", k);
        k += 2;
    } while (k < 20);

    // Break and continue statements
    for (int l = 1; l <= 10; ++l) {
        if (l == 5) {
            printf("Skipping number 5\n");
            continue; // Skip the rest of the loop when l is 5
        }
        if (l == 8) {
            printf("Breaking at number 8\n");
            break; // Exit the loop when l is 8
        }
        printf("Number: %d\n", l);
    }   

    // Nested loops to create a multiplication table
    printf("Multiplication Table:\n");
    for (int m = 1; m <= 10; ++m) {
        for (int n = 1; n <= 10; ++n) {
            printf("%d x %d = %d\n", m, n, m * n);
        }
    }

    return 0;
}