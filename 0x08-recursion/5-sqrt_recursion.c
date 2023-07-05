#include "main.h"

/**
 * _sqrt - function
 * @a: the number to calculate square root
 * @b: iterate the number
 * Return: the natural square root
 */

int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt(a, b + 1));
}

/**
* _sqrt_recursion - function
*
* @n: number to calculate square root
* Return: the natural square root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
