#include "main.h"

/**
 * main - function
 * descprition: pointer to an int as parameter and updates 98
 * return: always 0
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
