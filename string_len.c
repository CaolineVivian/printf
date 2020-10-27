#include "holberton.h"

/**
 *string_len - String Length
 *@string: input pointer
 * Return: length of string
 */

int string_len(char *string)
{
	int a;

	a = 0;
	while (string[a] != '\0')
	{
		a++;
	}
	return (a);
}
