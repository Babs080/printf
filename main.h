#ifndef MAIN_H
#define MAIN_H

/* libraries to use */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
 * struct pr - struct for operations
 * @op: operation
 * @f: to be listed
 *
 * Description: Checks if there's an operation
 */
typedef struct pr
{
	char *op;
	int (*f)(va_list);
} pr_f;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
#endif
