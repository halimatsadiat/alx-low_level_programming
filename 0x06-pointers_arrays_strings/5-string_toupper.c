#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @str: string
 *
 * Return: a pointer to changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (str[i] >= 'a'; str[i] <= 'z'; str[i++])
	{
		str[i] -= 32;
	}

	return (str);
}
