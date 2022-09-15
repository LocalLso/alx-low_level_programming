#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: last number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= 0 && b >= 0 && c >= 0 && a > b && b > c)
		largest = a;
	else if (a >= 0 && b >= 0 && c >= 0 && b > a && b > c)
		largest = b;
	else if (a >= 0 && b >= 0 && c >= 0 && c > a && c > b)
		largest = c;
	else if (a <= 0 && b <= 0 && c <= 0 && a > b && a > c)
		largest = a;
	else if (a <= 0 && b <= 0 && c <= 0 && b > a && b > c)
		largest = b;
	else if (a <= 0 && b <= 0 && c <= 0 && c > a && c > b)
		largest = c;
	else if (a <= 0 && b >= 0 && c >= 0 && b > c)
		largest = b;
	else if (a <= 0 && b >= 0 && c >= 0 && c > b)
		largest = c;
	else if (a <= 0 && b <= 0 && c >= 0)
		largest = c;
	else if (a <= 0 && b >= 0 && c <= 0)
		largest = b;
	else if (a >= 0 && b >= 0 && c <= 0 && a > b)
		largest = a;
	else if (a >= 0 && b >= 0 && c <= 0 && b > a)
		largest = b;
	else if (a >= 0 && b <= 0 && c >= 0 && a > c)
		largest = a;
	else if (a >= 0 && b <= 0 && c >= 0 && c > a)
		largest = c;
	else if (a >= 0 && b <= 0 && c <= 0)
		largest = a;
	return(largest); 
}
