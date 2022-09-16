#include "main.h"

/**
 * print_triangle - Prints a triangle using #
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int sign, index;

	if (size > 0)
	{
		for (sign = 1; sign <= size; sign++)
		{
			for (index = size - sign; index > 0; index--)
			{
				_putchar(' ');
			}

			for (index = 0; index < sign; index++)
			{
				_putchar('#');
			}

			if (sign == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
