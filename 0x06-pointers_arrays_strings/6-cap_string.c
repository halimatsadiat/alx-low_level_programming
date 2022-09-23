#include "main.h"

/**
 * cap_string - capitalise string
 * @str: string to be capitalize
 *
 * Return: a pointer to cap string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while ((!str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1]  == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == 0)
			str[i] = (int)str[i] - 32;
		i++;
	}
	return (str);
}
