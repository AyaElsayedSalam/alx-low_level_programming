#include "main.h"
/**
* string_toupper - a function that changes all
*                  lowercase letters of a string to uppercase.
 * Return: char*
 * @a: pointer to array of characters
*/
char *string_toupper(char *a)
{
int i, len = 0;

while (a[len] != '\0')
len++;

for (i = 0 ; i < len ; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
a[i] -= 32;
}
return (a);
}
