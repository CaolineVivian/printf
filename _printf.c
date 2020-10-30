#include "holberton.h"
/**
 *_printf - unction that produces output according to a format
 *@format: format specifier.
 *
 *Return: total number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int index = 0, nb = 0, alloc;
	char *string, *temp;
	char *string_copy;

	va_start(valist, format);
	alloc = 1024;
	string = malloc(sizeof(char) * alloc);
	temp = malloc(sizeof(char) * alloc / 2);
	if (string == NULL || temp == NULL)
	{
		free(string);
		free(temp);
		return (-1);
	}
	while (format && format[index])
	{
		if (format[index] == '%')
		{
			index++;
			switch (format[index])
			{
				case 'c':
					string[nb] = (char)va_arg(valist, int);
					nb++;
					break;
				case 's':
					string_copy = va_arg(valist, char*);
					_strncpy(&string[nb], string_copy);
					nb += _strlen(string_copy);
					break;
				case '%':
					string[nb] = '%';
					nb++;
					break;
				case 'd':
					itoa(va_arg(valist, int), temp, 10);
					_strncpy(&string[nb], temp);
					nb += _strlen(temp);
					break;
				case 'i':
					itoa(va_arg(valist, int), temp, 10);
					_strncpy(&string[nb], temp);
					nb += _strlen(temp);
					break;
			}
		}
		else
		{
			string[nb] = format[index];
			nb++;
		}
		index++;
	}
	write(1, string, nb);
	va_end(valist);
	return (nb);
}
