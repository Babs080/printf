#ifndef MAIN_H
#define MAIN_H

/* libraries to use */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printpercent(char *format, va_list pa);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);
/**
 * struct code_format - Struct format
 *
 * @sc: The specifiers
 * @f: The function associated
 */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /* MAIN_H */
