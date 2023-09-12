#include "main.h"
/**
* _strspn -  a function that gets the length of a prefix substring.
 * Return: integer length
 * @s: pointer to array of char
 * @accept: the searching character
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j = 0;

for (i = 0; *(s + i); i++)
{
for (j = 0 ; *(accept + j) ; j++)
{
if (s[i] == accept[j])
break;
}
if (*(accept + j) == '\0')
break;
}

return (i);
}
