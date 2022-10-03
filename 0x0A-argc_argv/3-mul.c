#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplicatio of two numbers
 * @argc: argument count
 * @argv:array of pointer
 *
 * Return: sucess 0
 */
int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	printf("%d\n", product);

	return (0);
}
