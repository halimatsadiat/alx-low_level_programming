#include "main.h"

/**
 * memset - fills the first byte
 * @s: pointer to the memory area to be filled
 * @c: character to fill memory
 * @n: number of byte to be filled
 *
 * Return: pointer to the filled memory
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
