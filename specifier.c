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
<<<<<<< HEAD
		{"b", put_b},
		{"u", put_u},
=======
		{"i", put_i},
>>>>>>> 415f4e7b635e1466898a21ee5a4fdfdf6473eca2
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
