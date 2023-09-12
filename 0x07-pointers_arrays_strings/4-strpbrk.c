#include "main.h"
/**
* _strpbrk -  a function that searches a string for any of a set of bytes.
 * Return: pointer to char
 * @s: pointer to array of char
 * @accept: the searching character
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;

for (i = 0; *(s + i); i++)
{
for (j = 0 ; *(accept + j) ; j++)
{
if (s[i] == accept[j])
break;
}
if (*(accept + j) != '\0')
return (s + i);
}
return (0);
}
