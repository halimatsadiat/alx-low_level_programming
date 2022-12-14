#include "main.h"

/**
 * times_table - print 9 times table starting from 0
 */
void times_table(void)
{
	int  nums, mul, nineTimes;

	for (nums = 0; nums <= 9; nums++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			nineTimes = nums * mul;
			if (nineTimes <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((nineTimes / 10) + '0');
			}
			_putchar((nineTimes % 10) + '0');
		}
		_putchar('\n');
	}
}
