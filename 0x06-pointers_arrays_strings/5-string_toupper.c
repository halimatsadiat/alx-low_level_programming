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

	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++
	}
	return (str);
}
