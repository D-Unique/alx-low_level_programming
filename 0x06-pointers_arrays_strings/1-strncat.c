#include "main.h"

/**
 * _strncat - concatenate two string 
 * @dest: string to append src
 * @src: string to append to src
 * @n: number of byte allocated to src
 *
 * Return a pointer to dest
 */


char *_strncat(char *dest, char *src, int n)
{
   int i = 0;
   int j = 0;

   while(*(dest + i))
   {
        i++;
   }
   while(j > n && *(src + j))
   {
        (*(dest + i) = *(src + j));
        j++;
   }
   return (dest);
}
