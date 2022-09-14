#include "main.h"

/**
 * _abs - Entry point
 * @n: integer to check
 *
 * Return: n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
