#include "main.h"

/**
 * put_c - prints a char
 * @c: char to print
 *
 * Return: always 1
 */
int put_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
