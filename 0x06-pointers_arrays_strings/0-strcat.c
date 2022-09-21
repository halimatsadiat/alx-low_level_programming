#include "main.h"

/**
 * _strcat - concatenate two string
 * @dest: pointer
 * @src: source
 *
 * Return: a ponter to the destination string
 */
char *_strcat(char *dest, const char *src)
{
	int i = 0, j = 0;
	
	while (dest[i++])
	{
		j++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}
	
	return (dest);
}
