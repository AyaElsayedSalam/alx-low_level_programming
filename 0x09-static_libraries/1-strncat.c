#include "main.h"
/**
* _strncat - a function that concatenates two strings.
 * Return: void
 * @dest: pointer to string that will have the 2 strings
 * @src: the source string to be copied in the dest
 * @n: number of character to be concatenate to the dest string
*/
char *_strncat(char *dest, char *src, int n)
{
int i, len1 = 0, len2 = 0;
while (src[len1] != '\0')
len1++;

while (dest[len2] != '\0')
len2++;

if (n > len1)
n = len1;

for (i = 0 ; i < n ; i++)
{
dest[len2] = src[i];
len2++;
}

return (dest);
}
