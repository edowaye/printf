#include"main.h"

/**
 * put_i - function to print integers
 * @i: list printed
 *
 * Return: Return count/ number of digits printed
 */
int put_i(va_list i)
{
	int a, expo = 1, len = 0;
	unsigned int n;

	a = va_arg(i, int);

	if (a < 0)
	{
		len = len + _putchar('-');
		n = a * -1;
	}
	else
		n = a;
	while (n / expo > 9)
		expo *= 10;

	while (expo != 0)
	{
		len = len + _putchar(n / expo + '0');
		n = n % expo;
		expo = expo / 10;
	}
	return (len);
}
