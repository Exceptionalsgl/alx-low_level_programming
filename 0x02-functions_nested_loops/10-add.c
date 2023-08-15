#include "main.h"
#include <stdio.h>

/**
 * int main - this is a fuction that add two integers and return the result
 * Return: 0
*/

int add(int a, int b)
{
    int result = a + b;
    return result;
}

int main(void)
{
    int num1 = 5;
    int num2 = 7;

    int sum = add(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

