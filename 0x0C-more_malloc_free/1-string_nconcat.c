#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings using at most an inputted
 * no of bytes
 * @s1: first string
 * @s2: second string
 * @n: maximum no of bytes of s2 to concatenate s1
 *
 * Return: if function fails, NULL, else a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}