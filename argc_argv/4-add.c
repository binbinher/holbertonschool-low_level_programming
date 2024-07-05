#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * Print the result, followed by a new line
 * print 0 if no number is passed to the program.
 * print Error if one of the number contains symbols that are not digits
 * @argc:counts of arguments.
 * @argv:array of arguments.
 * Return: 0 (success), 1 if error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
