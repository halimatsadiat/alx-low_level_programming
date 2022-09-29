#include "main.h"
#include <unistd.h>

/**
 * _putchar - wirtes the char to stdout
 * @c: character to print
 * Return: On success 1, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
