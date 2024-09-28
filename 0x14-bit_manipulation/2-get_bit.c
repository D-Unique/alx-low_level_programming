#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: this is an unsigned long interger
 * @index:  index is the index, starting from 0 of the bit you want to get.
 * Return: The value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int *bit = &n;
if (!bit)
return (-1);
else
return ((*bit >> index) & 1);
}
