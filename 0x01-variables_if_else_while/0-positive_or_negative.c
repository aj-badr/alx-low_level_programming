#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative
*
* Return: 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("the number %i is positive\n", n);
}
else if (n == 0)
{
	printf("the number %i is zero\n", n);
}
else if (n < 0)
{
	printf("the number %i is negative\n", n);
}
return (0);
}
