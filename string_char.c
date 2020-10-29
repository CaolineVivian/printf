#include "holberton.h"

/**
 * string_char - Creates a string from a char
 * @argument: Variable arguments
 * Return: string from char
 */

char *string_char(va_list argument)
{
	char *string;

	string = malloc(2 * sizeof(char));
	string[0] = va_arg(argument, int);
	return (string);
}
