#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * @void: empty
 *
 * Return: Always 0.
 */

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
