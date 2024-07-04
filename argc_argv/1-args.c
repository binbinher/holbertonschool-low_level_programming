#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: numbers of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 * -1 for excluding the name of the program
 */
int main(int argc, char **argv)
{
	(void)**argv;
	printf("%d\n", argc - 1);
	return (0);
}