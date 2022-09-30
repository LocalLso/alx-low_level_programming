#include "main.h"

/** _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to print
 *
 * _sqrt_recursion - a function that returns the square root of a number.
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if ((n < 0) || (n != n * n))
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (1 + _sqrt_recursion(n - (1 +  2n)));
	}
}
