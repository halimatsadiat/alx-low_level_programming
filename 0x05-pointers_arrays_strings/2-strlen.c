#include "main.h"

/**
 * _strlen - length of a string
 * @str: The string
 *
 * Return: the length of @str
 */
int  _strlen(char *str)
{
	int s = 0;

	while (*str != '\0')
		s++;

	return (s);
}
