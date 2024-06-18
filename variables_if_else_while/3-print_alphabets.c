#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,then uppercase,
 * followed by a new line, use putchar
 *
 * Return: Always 0.
 */
int main(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
                putchar (letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar (letter);
	putchar('\n');

        return (0);
}
