#include "main.h"
/**
* _strncpy - a function that copy string
 * Return: void
 * @dest: pointer to string that will have the copy
 * @src: the source string to be copied in the dest
 * @n: the umber of charater to be copied
*/
char *_strncpy(char *dest, char *src, int n)
{
int i, len1 = 0, len2 = 0;

while (src[len1] != '\0')
len1++;

while (dest[len2] != '\0')
len2++;

for (i = 0 ; ((i < n) && (src[i] != '\0')) ; i++)
{
dest[i] = src[i];
}

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
