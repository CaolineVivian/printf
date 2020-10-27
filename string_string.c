#include "holberton.h"
/**
 * string_string - print a string
 * @argument: Arguments
 * Return: string
 */

char *string_string(va_list argument)
{
	char *string = va_arg(argument, char*);

	if (string == NULL)
	{
		string = "(null)";
	}
	return (string);
}
