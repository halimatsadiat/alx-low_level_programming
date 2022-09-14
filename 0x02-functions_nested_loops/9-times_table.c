#include "main.h"

/**
 * times_table - print 9 times table starting from 0
 */
void times_table(void)
{
	int  nums, mul, nineTimes;

	for ( nums = 0; nums <= 9; nums++)
	{
		for (mul = 0; mul <= 9; mul++)
		{
			nineTimes = nums * mul;
			_putchar((nineTimes % 10) + '0');
		}
		_putchar('\n');
	}
}
