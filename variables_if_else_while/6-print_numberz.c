#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * not using char as variable, use putchar 
 * Return: Always 0. (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0'); //char 0 ASCII value is 48,num % 10 print a single digit as a char in c
	putchar('\n');	

	return (0);
}
