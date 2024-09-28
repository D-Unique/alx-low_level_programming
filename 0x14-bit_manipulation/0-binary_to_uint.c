#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:point to a string of 0 and 1 chars
 * Return: the converted number, or 0 ifthere is
 * one or more chars in the string b that is not 0 or 1 b is NULL
 */


unsigned int binary_to_uint(const char *b)
{
unsigned int uint;

	if (!b)
		return (0);
	for (uint = 0; *b; b++)
	{
		uint = uint << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			uint = uint | 1;
	}
	return (uint);

}
