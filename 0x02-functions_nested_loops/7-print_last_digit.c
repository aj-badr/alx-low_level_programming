#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @c: the number to be treated
 * Return: the value of the last digit
 */

int print_last_digit(int c)
{
int last_num;

last_num = c % 10;

if (last_num < 0)
{
last_num = last_num * -1;
}
_putchar(last_num + '0');
return (last_num);
}
