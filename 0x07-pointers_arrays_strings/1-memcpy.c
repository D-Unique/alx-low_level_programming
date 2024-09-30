#include "main.h"

/**
 * _memcpy - this function copies n bytes from
 * memory area src to memory area dest
 * @dest: memory area dest
 * @src: memory area src
 * @n: n bytes of the memory area
 * Return: a pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (dest);
}
