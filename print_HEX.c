#include "main.h"

/**
 * put_X - printing upper case hexa
 * @X: argument recieved
 *
 * Return: no. of char printed
 */
int put_X(va_list X)
{
	return (conv_hex(va_arg(X, unsigned int), 16, 'A'));
}
