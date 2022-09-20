#include "main.h"

/**
 * swap_int - fuction
 * @a: variable
 * @b: variable
 * return: void
 */

void swap_int(int *a, int *b);
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
