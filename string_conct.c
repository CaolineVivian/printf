#include "holberton.h"

/**
 * string_conct - Concatenates two strings
 * @dest: Destination
 * @src: Source
 * @i: Position in src
 * Return: Concatenated String
 */

int string_conct(char *dest, const char *src, int i)
{
	int a;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[i] != '\0' && src[i] != 37)
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	return (i);
}
