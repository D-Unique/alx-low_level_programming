#include "main.h"

/**
 *_strcmp - This funcetions compares two strings
 *@s1: string to be compared
 *@s2: string to be compared
 *Return: an integer less than, equal to,
 *or greater  than  zero if  s1 is found
 *respectively, to be less than, to
 *match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
unsigned char *p1 = (unsigned char *) s1;
unsigned char *p2 = (unsigned char *) s2;
if (p1 == p2)
return (0);
else if (p1 < p2)
return (-1);
else
return (1);

return (0);

}
