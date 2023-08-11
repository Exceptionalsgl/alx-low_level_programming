#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;

    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number using rand() function
    n = rand();

    // Print the generated number
    printf("The number %d\n", n);

    // Check whether the number is positive, zero, or negative
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

