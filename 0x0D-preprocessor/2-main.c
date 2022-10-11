#include <stdio.h>

/**
 * main - print the name of the file of the program was compiled from
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
