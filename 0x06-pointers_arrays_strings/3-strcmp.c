#include "main.h"
/**
* _strcmp - a function that compares two strings.
 * Return: int
 * @s1: pointer to string
 * @s2: the source string
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, result = 0;

for (i = 0 ; ((s1[i] != '\0') && (s2[i] != '\0')) ; i++)
{
if (s1[i] != s2[i])
{
result = s1[i] - s2[i];
break;
}
}
return (result);
}
