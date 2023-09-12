#include "main.h"
/**
* _memset - a function that concatenates two strings.
 * Return: pointer to the buffer
 * @s: pointer to array of char , buffer
 * @b: the value to be filled in the buffer
 * @n: the length of the buffer
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0 ; i < n ; i++)
s[i] = b;

return (s);
}
