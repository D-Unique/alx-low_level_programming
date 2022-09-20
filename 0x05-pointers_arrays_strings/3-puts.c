#include "main.h"

/**
 *  _puts - function
 *  @str: print string with new line
 *  return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
