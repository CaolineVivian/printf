#include "holberton.h"

/**
 * _calloc - Calloc
 * @bytes: Memory bytes
 * @size: Size of bytes
 * Return: Point
 */

void *_calloc(unsigned int bytes, unsigned int size)
{
	char *point;
	unsigned int a;

	if (bytes > 0 && size > 0)
	{
		point = malloc(bytes * size);
		if (!point)
		{
			free(point);
			return (NULL);
		}
		for (a = 0; a < (bytes * size); a++)
		{
			point[a] = 0;
		}
		return (point);
	}
	else
	{
		return (NULL);
	}
}
