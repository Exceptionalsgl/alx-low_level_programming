#include <stdio.h>
/**
 * main - Entry point
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar(number + '0');
}
putchar('\n');
return (0);
}
