#include "main.h"

/**
 * memset - fills the first n bytes
 * @s: pointer to memory
 * @c: character to be filled
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory area
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;
	
	for (i = 0; i < n; i++)
	{
		memory[i] = value;
	}

	return (memory);
}
