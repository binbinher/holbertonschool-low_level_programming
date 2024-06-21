#include <unistd.h>
/**
 * main -  prints string: "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19"
 * not allowed puts and printf
 * Return: 1.
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\"
										- Dora Korpar,
						 2015 - 10 - 19 ";

								 write(2, msg, 58);
	return (1);
}
