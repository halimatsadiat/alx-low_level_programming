#include "main.h"

/**
 * factorial - returns the factorial of n
 * @n: the number to find the factorial
 *
 * Return: if n > 0, the factorial of n, else display error
 */
int factorial(int n)
{
	int total = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	total = n * factorial(n - 1);

	return (total);
}
