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

	while (dest[i++])
	{
		j++;
	}
	i = 0;
	while (src[i])
	{
		dest[j++] = src[i];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
