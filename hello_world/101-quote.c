#include <unistd.h>
/**
 * main -  prints string: "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19"
 * not allowed puts and printf
 * Return: 1.
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
