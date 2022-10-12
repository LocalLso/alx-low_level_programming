#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

/**
 * Definations and
 * _putchar - prints 1 char
 * print_name - prints name
 * f - prints name
 * function prototypes
 * @c: char to print
 * Return: Always 0.
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));


#endif /* FUNCTION_POINTERS_H_ */
