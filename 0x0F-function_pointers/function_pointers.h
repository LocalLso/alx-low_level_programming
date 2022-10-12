#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_
#include <stddef.h>

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


#endif /* _FUNCTION_POINTERS_H_ */
