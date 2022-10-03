#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the addition of positive number
 * @argc: argument count
 * @argv: array of pointers
 *
 * Return: success 1, else 0
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
