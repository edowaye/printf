#include "main.h"

/**
 * strlength - gets string length
 * @string: string
 * Return: length (int)
 */

int strlength(char *string)
{
	int length;

	for (length = 0; string[length] != '\0'; length++)
		;

	return (length);
}
