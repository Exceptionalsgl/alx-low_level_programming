#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if number is positive , zero or negative
 * return: always (success)
 */

int main(void) {
    int n;

    srand(time(0)); // Seed the random number generator with current time
    n = rand() % (RAND_MAX + 1) - (RAND_MAX / 2); // Generate a random number

    printf("The number %d\n", n);
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
