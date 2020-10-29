#include "holberton.h"

/**
 * container - Values Container
 * @argument: Arguments
 * @value: input value
 * Return: String before buffer
 */

char *container(const char value, va_list argument)
{
	char *temp_string;
	token container[] = {
		{'c', string_char},
		{'s', string_string},
		{'%', specifier},
		{'i', _integers},
		{'d', _integers},
		{'l', _integers},
		{'\0', NULL}
	};

	int a;

	a = 0;
	while (container[a].notifier != value && a < 7)
	{
		a++;
	}
	temp_string = container[a].func(argument);
	return (temp_string);
}
