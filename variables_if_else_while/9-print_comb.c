#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * print in ascending order, use putchar only, 4 times max
 * char is not allowed
 * Return: Always 0.
 */
int main(void)
{
	int i,
	int j;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{	
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar('\n');
		}
	}
	return (0);
}
