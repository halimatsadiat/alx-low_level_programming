#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using \
 * @n: The number of \
 */
void print_diagonal(int n)
{
	int line, t;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (t = 0; t < line; t++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (line == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
