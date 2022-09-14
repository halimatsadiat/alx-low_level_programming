#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
