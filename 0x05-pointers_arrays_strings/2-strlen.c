#include"main.h"

/**
* _strlen - function
* @s: pointer to the string to check
* Return: void
*/

int _strlen(char *s)
{
int i = 0;

while (s[i])

	i++;
return (i);
}

