#include "main.h"
/**
* _strcat - a function that concatenates two strings.
 * Return: void
 * @dest: pointer to string that will have the 2 strings
 * @src: the source string to be copied in the dest
*/
char *_strcat(char *dest, char *src)
{
int i, len1 = 0, len2 = 0;
while (src[len1] != '\0')
len1++;

while (dest[len2] != '\0')
len2++;

for (i = 0 ; i < len1 ; i++)
{
dest[len2] = src[i];
len2++;
}

return (dest);
}

