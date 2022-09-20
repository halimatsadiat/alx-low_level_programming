#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of integers
 * @a: array of integers
 * @n: number of element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i+=)
	{
		printf(a[i]);

		if (i == n - 1)
		{
			continue;
		}
		printf(', ');
	}
	printf('\n');
}
