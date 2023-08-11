#include <stdio.h>
/**
 * main - Entry point
 * a program that prints the alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase, uppercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');
return (0);
}
