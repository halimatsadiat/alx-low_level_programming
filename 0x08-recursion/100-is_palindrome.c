#include "main.h"

/**
 * find_strlen - return the length of a string
 * @s: string to be measured
 *
 * Return: length of a string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len = len + find_strlen(s + len);
	}
	return (len);
}

/**
 * check _palindrome - checks if a string is aplindrome
 * @s: string
 * @len: length of the string
 * @i: the index of s to be checked
 *
 * Return: if true, 1, else 0
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: if tue,1, else, 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, i));
}
