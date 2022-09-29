#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: integer to print
 * @y: integer to print
 *
 * _pow_recursion - func that returns the value of x raised to the power of y.
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
