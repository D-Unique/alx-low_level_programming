#include "main.h"

/**
 *reverse_array - This funcetions compares two strings
 *@a: array
 *@n: number of elements of the array
 *Return: a reversed array
 */


void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
