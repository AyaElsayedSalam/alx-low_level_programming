#include "main.h"
#include <stdlib.h>
/**
* _memcpy - function that copies memory area.
 * Return: pointer to the buffer
 * @dest: pointer to array of char , destination
 * @src: pointer to the source buffer
 * @n: number of byte to be copied to the dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
if (src == NULL)
return (dest);

for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}

return (dest);
}
