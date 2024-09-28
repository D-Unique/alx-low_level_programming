#include "main.h"

/**
 * set_bit - This function that sets the value of a bit to 1 at a given index.
 * @n: unsigned long int
 * @index: given index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitmask;
bitmask = 1;
if (index >= sizeof(*n) * 8)
{
return (-1);
}

*n = *n | ((bitmask << index) | 1);
return (1);
}



