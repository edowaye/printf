#include "main.h"

/**
  *integer- a function that prints an integer
  *@num: input integer
  *
  *Return: count of integer
  *
  */

int integer(int num)
{
	unsigned int ui;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		ui = -num;
	}
	else
		ui = num;

	if (ui >= 10)
		integer(ui / 10);
	_putchar(ui % 10 + '0');

	return (count);
}

/**
  *put_i - prints an integer
  *
  *@format: format to print an integer
  *@i: va_list with int to print
  *
  *Return: number of int printed
  */

int put_i(va_list i)
{
	int num = va_arg(i, int);
	int nn;

	nn = integer(num);

	return (nn);
}
