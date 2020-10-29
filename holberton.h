#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct printf - Contains flag and function
 * @notifier: Identifies character
 * @func: Pointer Function
 */

typedef struct printf
{
	char notifier;
	char *(*func)(va_list argument);
} token;

char *string_char(va_list argument);
void *_calloc(unsigned int bytes, unsigned int size);
char *string_string(va_list argument);
char *_integers(va_list argument);
int string_len(char *string);
int string_conct(char *dest, const char *src, int i);
void *string_cat(char *dest, char *src);
char *specifier(va_list argument);
char *container(const char value, va_list argument);
int _printf(const char *format, ...);

#endif
