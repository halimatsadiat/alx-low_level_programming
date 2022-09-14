#include "main.h"

/**
 * print_to_98 - print all natural numbers to 98
 * @n: count number
 */
void print_to_98(void)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
