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



int put_u(va_list u);
int put_b(va_list b);
int put_s(va_list s);
int put_c(va_list c);
int (*check_for_specifiers(const char *format))(va_list);
int strlength(char *string);
int _putchar(char c);
int _printf(const char *format, ...);
int put_i(va_list i);

#endif /*MAIN_H*/
