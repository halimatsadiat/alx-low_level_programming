#include <stdio.h>

/**
 * main - print the number of argumemts
 * @argc: argument count
 * @argv: array pointer
 *
 * Return: Success(0)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
