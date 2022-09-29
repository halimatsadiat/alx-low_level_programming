#include "main.h"

/**
 * _pow_recursion - return the value of x raised to power of y
 * @x: the number to be raised
 * @y: the power
 *
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int total = x;

	if ( y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	total = total * _pow_recursion(x, y - 1);

	return (total);
}
