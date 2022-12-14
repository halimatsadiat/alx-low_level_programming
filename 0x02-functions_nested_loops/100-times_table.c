#include "main.h"

/**
 * print_times_table - print timestable starting from 0
 * @n: value
 */
void print_times_table(int n)
{
	int nums, mul, times;

	if (n >= 0 && n <= 15)
	{
		for (nums = 0; nums <= n; nums++)
		{
			_putchar('0');

			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				times = nums * mul;

				if (times <= 99)
				{
					_putchar(' ');
				}
				if (times <= 9)
				{
					_putchar(' ');
				}
				if (times >= 100)
				{
					_putchar((times / 100) + '0');
					_putchar(((times / 10)) % 10 + '0');
				}
				else if (times <= 99 && times  >= 10)
				{
					_putchar((times / 10) + '0');
				}
				_putchar((times % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
