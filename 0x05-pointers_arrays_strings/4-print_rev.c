#include "main.h"

/**
 * print_rev - print reverse string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int leni = 0, i;

	while (s[i++])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
