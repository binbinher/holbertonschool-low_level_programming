#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * print in ascending order, use putchar only, 4 times max
 * char is not allowed
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i % 10);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
