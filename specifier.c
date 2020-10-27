#include "holberton.h"

/**
 * specifier - Prints specifier
 * @argument: list of arguments
 * Return: Specifier
 */

char *specifier(va_list argument)
{
	char *string;

	string = "%";
	if (va_arg(argument, int) == *string)
	{
		return (string);
	}
	return (string);
}
