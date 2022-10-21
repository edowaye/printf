#include "main.h"

/**
 * put_x - prints lower case hex
 * @x: argument recieved
 *
 * Return: no of char printed
 */

int put_x(va_list x)
{
	return (conv_hex(va_arg(x, unsigned int), 16, 'a'));
}
