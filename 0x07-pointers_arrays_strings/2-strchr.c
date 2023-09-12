#include "main.h"
#include <stdlib.h>
/**
* _strlen - a function that returns the length of a string.
 * Return: void
 * @s: pointer to char
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}

/**
* _strchr - a function that locates a character in a string.
 * Return: pointer to the buffer
 * @s: pointer to array of char
 * @c: the searching character
*/
char *_strchr(char *s, char c)
{
int i = 0;
int len = _strlen(s);
for (i = 0 ; i < len ; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
