#include "main.h"

/**
 * put_s - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */
int put_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
