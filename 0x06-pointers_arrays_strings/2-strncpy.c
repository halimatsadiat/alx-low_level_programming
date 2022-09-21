#include "main.h"

/**
 * _strncpy - copies a number
 * @dest: buffer
 * @src: source
 * @n: maximus no of bytes
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (src[i++])
	{
		k++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = k; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
