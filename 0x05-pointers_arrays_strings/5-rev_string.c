#include "main.h"
/**
* rev_string -  a function that reverses a string.
 * Return: void
 * @s: pointer to char
*/
void rev_string(char *s)
{
int len = 0, i, j = 0;
char temp;

while (s[len] != '\0')
len++;

j = len - 1;
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[j];
s[j--] = temp;
}
}
