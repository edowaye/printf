#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct put
{
	char *t;
	int (*f)(va_list);
} put_t;


int put_c(va_list c)
static int (*check_for_specifiers(const char *format))(va_list);
int strlength(char *string);
int _putchar(char c);
int _printf(const char *format, ...);

#endif /*MAIN_H*/
