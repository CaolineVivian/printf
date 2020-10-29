#include "holberton.h"

/**
 * _integers - prints integers
 * @argument: Arguments
 * Return: Integer
 */

char *_integers(va_list argument)
{
	unsigned int abs, alt, num, count;
	long int lit;
	char *string;

	string = malloc(10 * sizeof(char));

	lit = va_arg(argument, int);
	if (lit < 0)
	{
		abs = (lit * -1);
		string[0] = '-';
		count = 1;
	}
	else
	{
		abs = lit;
		count = 0;
	}

	alt = abs;
	num = 1;
	while (alt > 10)
	{
		alt = alt / 10;
		num = num * 10;
	}
	while (num >= 1)
	{
		string[count] = (((abs / num) % 10) + 48);
		count++;
		num = num / 10;
	}
	return (string);
}
