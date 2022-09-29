#include "main.h"

/**
 * find_sqrt - find the suare root
 * _sqrt_recursion - return the square root of a number
 * @num: the number to find the sqrt of
 * @root: the root
 * @n: the number to return the sqrt
 *
 * Return: if n has a natural square root, return n, esle , -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (find_sqrt(num, root + 1));
}

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}

	return (find_sqrt(n, root));
}
