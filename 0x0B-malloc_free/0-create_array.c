#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char and init it with specific char
 * @size: size of array to be initialized
 * @c: specific char to init the array with
 *
 * Return: if size == 0 or function fails - NULL, else, apointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
