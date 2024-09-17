#include "main.h"

/**
 *_strcmp - This funcetions compares two strings
 *@a: array
 *@n: number of elements of the array
 *Return: a reversed array
 */


void reverse_array(int *a, int n)
{
    int *var;
    int i;

    var = a + n - 1;

    for (i = 0; i < n; i++)
    {
        a[i] = var[i];
    }
}

