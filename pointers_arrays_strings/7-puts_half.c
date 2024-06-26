#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: the string
 * The function should print the second half of the string
 * If the number of characters is odd
 * print the last n characters of the string
 *  where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
int index = 0, len = 0, n;

while (str[index++])
	len++;
if ((len % 2) == 0)
	n = len / 2;
else
	n = (len + 1) / 2;
for (index = n; index < len; index++)
	_putchar(str[index]);

_putchar('\n');
}
