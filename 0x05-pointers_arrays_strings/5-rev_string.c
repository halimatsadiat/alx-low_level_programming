#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reverse
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char x;

	while (s[index++])
	{
		len++;
	}

	for (index = len - 1; index >= len / 2; index--)
	{
		x = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = x;
	}
}
