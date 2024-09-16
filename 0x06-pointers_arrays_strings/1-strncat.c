#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (*(dest + i))
i++;

while (j < n && *(src + j))
*(dest + i++) = *(src + j++);

*(dest + i) = '\0';
return (dest);
}
