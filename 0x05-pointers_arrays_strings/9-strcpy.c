#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src to a buffer
 * @dest: the buffer
 * @src: the source
 *
 * Return: a pointer to @dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
