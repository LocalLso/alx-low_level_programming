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
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	print("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));


	return (0);
}
