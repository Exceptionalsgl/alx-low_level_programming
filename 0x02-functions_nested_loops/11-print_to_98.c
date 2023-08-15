#include "main.h"

/**
 * void print_to_98 - functions that print natural number
 * Return: 0
*/

void print_to_98(int n)
{
    while (n != 98)
    {
        printf("%d, ", n);
        if (n < 98)
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    printf("%d\n", n); // Print 98
}

int main(void)
{
    int num = 5;
    print_to_98(num);
    return 0;
}

