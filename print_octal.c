#include "main.h"

/**
 * put_o - function to print octal
 * @o: list being passed
 *
 * Return: updated count
 */

int put_o(va_list o)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(o, unsigned int);
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
