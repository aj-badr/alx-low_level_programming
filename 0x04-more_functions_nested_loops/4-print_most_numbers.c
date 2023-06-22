#include "main.h"

/**
 * print_most_numbers - function that prints the numbers.
 * Return: 0 to 9 except 2 and 4.
 */

void print_most_numbers(void)
{

int x;

for (; x <= 9; x++)
{
if (x == 2 || x == 9)
{
continue;
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}
