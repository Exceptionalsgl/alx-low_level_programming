#include <stdio.h>

/**
 * print_9_times_table - this function print 9n times table
 * Return: 0
*/

void print_9_times_table(void)
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("9 x %d = %d\n", i, 9 * i);
    }
}

int main(void)
{
    print_9_times_table();
    return 0;
}

