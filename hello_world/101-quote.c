#include <unistd.h>
/**
 * main - prints out the last part of a quote in the standard error.
 * Return: 1.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
