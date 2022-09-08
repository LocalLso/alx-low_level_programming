#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0(Succes)
 */
int main ()
{
	long int longintType;
	long long int longlongintType;
	float floatType;
	int intType;
	char charType;

	/*size of evaluates the size of a variable*/
	printf("Size of a char: %i byte(s)\n", sizeof(charType));
	printf("Size of an int: %i byte(s)\n", sizeof(intType));
	printf("Size of a long int: %i byte(s)\n", sizeof(longintType));
	print("Size of a long long int: %i byte(s)\n", sizeof(longlongintType));
	printf("Size of float: %i byte(s)\n", sizeof(floatType));

	return 0;
}
