#include "main.h"
#include <stdio.h>

/**
 * _putchar - write char c to stdout
 * @c: character c
 *
 * Return: On succcess 1
 * on error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
