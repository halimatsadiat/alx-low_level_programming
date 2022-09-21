#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: string
 * @src: source
 * @n: number of byte
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}

	return (dest);
}
