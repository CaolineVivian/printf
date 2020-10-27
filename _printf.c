#include "holberton.h"

/**
 * _printf - Printf Function
 * @format: input constant
 * Return: size of bufer on success and -1 when fail.
 */

int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		va_list argument;
		unsigned int a;

		char *buffer, *temp_string;

		va_start(argument, format);
		buffer = _calloc(2048, sizeof(char));

		if (buffer == NULL)
			return (-1);

		a = 0;
		while (format && format[a] != 00)
		{
			if (format[0] == 37 && format[a] == 00)
			{
				return (-1);
			}
			a = string_conct(buffer, format, a);
			if (format[a] == 37)
			{
				a++;
				temp_string = container(format[a], argument);
				string_cat(buffer, temp_string);
			}
			if (format[a] != '\0')
				a++;
		}
		a = string_len(buffer);
		write(1, buffer, a);
		va_end(argument);
		free(buffer);
		return (a);
	}
	return (-1);
}
