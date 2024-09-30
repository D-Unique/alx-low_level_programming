#include "main.h"

/**
 * _memset - this function that fills memory with a constant byte.
 * @s: this is a pointer
 * @b: constant byte b
 * @n: n bytes of the memory area
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{

		s[i] = b;

	}

	return (s);
}
