#include <stdio.h>
/**
 * main - prints the alphabet except q and e in lowercase,
 * followed by a new line, use putchar
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	if (letter != 'q' && letter != 'e')
		putchar(letter);
	putchar('\n');
	return (0);
}
