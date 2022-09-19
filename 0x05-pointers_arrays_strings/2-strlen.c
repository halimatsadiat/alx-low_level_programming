#include "main.h"

/**
 * _strlen - length of a string
 * @str: The string
 *
 * Return: the length of @str
 */
int  _strlen(char *s)
{
	char str[100];
	int  length = 0;

	while (*str++)
		length++;

	return (length);
}
