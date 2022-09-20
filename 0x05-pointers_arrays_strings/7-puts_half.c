#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string to be printrd
 */
void puts_half(char *str)
{
	int index = 0, len = 0, s;

	while (str[index++])
	{
		len++;
	}

	if ((len % 2) == 0)
	{
		s = len / 2;
	}
	else
	{
		s = (len + 1) / 2;
	}

	for (index = s; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
