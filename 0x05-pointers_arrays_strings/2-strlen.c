#include "main.h"

/**
 * _strlen - length of a string
 * @s: The string
 *
 * Return: the length of @str
 */
int  _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
		n++;

	return (n);
}
