#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n:the number
 * Return: the natural square root.
 * -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -function that returns the square root of a number
 * @x: number
 * @y: square number
 * Return: squared number
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y > x)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(x, y + 1));
	}
}
