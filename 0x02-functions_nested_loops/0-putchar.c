#include "main.h"

/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_val[] = {95, 112, 117, 116, 99, 104,  97, 114};
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(ascii_val[a]);
	}
	_putchar('\n');
	return (0);
}
