#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters to calculate the sum
 *
 * Return: if n == 0, 0, else, sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(nums, int);

	va_end(nums);

	return (sum);
}
