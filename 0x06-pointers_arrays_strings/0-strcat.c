#include "main.h"

/**
 * strcat - concatenate two string
 * @dest: pointer
 * @src: source
 *
 * Return: a ponter to the destination string
 */
char *strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
