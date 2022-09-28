#include "main.h"

/**
 * _strspn - get the length of a prefic substring
 * @s: string
 * @accept: prefix to be measured
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsignedint bytes = 0;
	int i;

	while(*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++
	}
	return (bytes);
}
