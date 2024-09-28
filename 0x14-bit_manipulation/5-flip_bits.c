#include "main.h"

/**
 * flip_bits - This function returns the number of bits you would need to flip to get 
 * from one number to another.
 * @n: unsigned long int
 * @m: index is the index, starting from 0 of the bit you want to set
 * Return: the number of bits you would need to flip to get 
 * from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m) {
    unsigned long int com = n ^ m;
    int counter = 0;

    while (com != 0) {
        counter += (com & 1);
        com >>= 1;
    }

    return counter;
}
