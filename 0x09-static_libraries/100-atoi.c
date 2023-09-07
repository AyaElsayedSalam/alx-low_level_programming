#include "main.h"
/**
* _strcpy - a function that copy string
 * Return: void
 * @dest: pointer to string that will have the copy
 * @src: the source string to be copied in the dest
*/
char *_strcpy(char *dest, char *src)
{
int i, len = 0;
while (src[len] != '\0')
len++;

for (i = 0 ; i < len ; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

