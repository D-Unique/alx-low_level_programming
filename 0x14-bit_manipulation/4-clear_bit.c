#include "main.h"

/**
 * clear_bit - This function that sets the value of a
 * bit to 0 at a given index.
 * @n: unsigned long int
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitmask;
bitmask = 1;
if (index >= sizeof(*n) * 8)
{
return (-1);
}

*n = (*n & ~(bitmask << index));

return (1);
}



