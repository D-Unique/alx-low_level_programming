#include "main.h"

/**
 * cap_string - capitalize all the first word of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, c;
	int change;
	char punt[] = ",;.!?(){}\n\t\" ";

	for (i = 0, change = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			change = 1;
		for (c = 0; punt[c] != '\0'; c++)
		{
			if (punt[c] == str[i])
				change = 1;
		}

		if (change)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				change = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				change = 0;
			else if (str[i] > 47 && str[i] < 58)
				change = 0;
		}
	}
	return (str);
}
