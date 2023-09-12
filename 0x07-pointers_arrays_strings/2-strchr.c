#include "main.h"
#include <stdlib.h>
/**
* _strchr - a function that locates a character in a string.
 * Return: pointer to the buffer
 * @s: pointer to array of char
 * @c: the searching character
*/
char *_strchr(char *s, char c)
{
int i = 0;

for (i = 0 ; s[i] != '\0' ; i++)
{
if (s[i] == c)
return (s + i);
}
if (*s == c)
return (s);
else
return (0);
}
