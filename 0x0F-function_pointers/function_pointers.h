#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

/**
 * _putchar - prints 1 char
 * print_name - prints name
 * f - prints name
 *
 * @c: char to print
 * Return: Always 0.
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);


#endif /* FUNCTION_POINTERS_H_ */
