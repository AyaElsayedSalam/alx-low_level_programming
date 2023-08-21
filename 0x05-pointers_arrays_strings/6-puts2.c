#include "main.h"
/**
* puts2 -  a function that prints every other character of a string,
 * Return: void
 * @str: pointer to char
*/
void puts2(char *str)
{
int len = 0, i;

while (str[len] != '\0')
len++;

for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
