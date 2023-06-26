#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: nothing
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
