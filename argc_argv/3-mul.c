#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * print the result of the multiplication, followed by a new line
 * @argc: counts of arguments
 * @argv: array of arguments
 * print Error if it does not receive two arguments
 * Return: 0 if success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
