#include "main.h"

/**
 *_strncpy - This funcetion copies at most n bytes of the
 *string pointed by src, including the terminating null byte
 *('\0'), to the buffer pointed to by dest.
 *
 * @dest: string to copy src  to
 * @src: string to copy to dest
 * @n: the number of byte of src to copy to dest
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)

{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}




