#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - this is the main function
*Return: return function
*/

int main(void)
	/*
	 * Main- run and return 0
	 */
	{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/*
		 * your code goes there
		 */

		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}
		return (0);
	}
