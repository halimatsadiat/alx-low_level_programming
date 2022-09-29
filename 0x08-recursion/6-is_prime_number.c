#include "main.h"

/**
 * is_divisible - check if a num is divisible
 * is_prime_number - check if a num is a prime number
 * @num: the number to check
 * @div: the divisor
 * @n: the number to be checked
 *
 * Return: if number is divisible -0, else, -1, if num is prime 1, else, 0
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
