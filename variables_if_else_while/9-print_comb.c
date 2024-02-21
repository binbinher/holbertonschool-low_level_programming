#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * must be separtated by , followed by a space
 * numbers should be printed in ascending order
 * only putchar no printf
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
