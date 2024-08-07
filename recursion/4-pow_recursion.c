#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base number.
 * @y: the exponent number.
 * Return: x power y
 * otherwise: -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
