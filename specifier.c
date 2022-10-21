#include "main.h"

/**
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	put_t p[] = {
		{"c", put_c},
		{"s", put_s},
		{"b", put_b},
		{"u", put_u},
		{"i", put_i},
		{"d", put_i},
		{"x", put_x},
		{"X", put_X},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}
