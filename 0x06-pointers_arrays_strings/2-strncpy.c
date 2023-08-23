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
int check = 0;
while (src[len1] != '\0')
len1++;

while (dest[len2] != '\0')
len2++;

if (n > len1)
{
n = len1;
check = 1;
}
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
if (check == 1)
dest[i] = '\0';
return (dest);
}

