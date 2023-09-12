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
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else
s++;
}

return (0);
}
