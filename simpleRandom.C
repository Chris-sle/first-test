#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand((unsigned int)time(NULL));

    int min = 1, max = 100;

    // Generate and print 10 random numbers between 1 and 100
    for (int i = 0; i < 10; ++i) {
        int randomNum = (rand() % (max - min + 1)) + min; // Generate random number in the range [min, max]
        printf("Random Number %d: %d\n", i + 1, randomNum);
    }

    return 0;
}