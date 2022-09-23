#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @str: string
 *
 * Return: a pointer to changed string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (int)str[i] - 32;
	}
	return (str);
}
