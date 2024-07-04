#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: the given number
 * Return:-1 if n is lower than 0.
 * factorial of 0 is 1.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
