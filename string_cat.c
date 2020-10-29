#include "holberton.h"

/**
 * string_cat - concatenates two strings
 * @dest: Dest
 * @src: Source
 * Return: Concatenated String
 */

void *string_cat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
