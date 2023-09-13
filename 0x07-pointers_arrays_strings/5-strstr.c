#include "main.h"
#include<stdlib.h>
#include <stdio.h>
/**
* _strstr - a function that locates a substring.
 * Return: pointer to char
 * @haystack: pointer to array of char
 * @needle: the searching character
*/
char *_strstr(char *haystack, char *needle)
{
int i, ch;
for (i = 0 ; *(haystack + i) ; i++)
{
if (haystack[i] == *needle)
{
haystack += i;
ch = checkSubstring(haystack, needle);
break;
}
}

if (ch == 1)
return (haystack);

else
return (NULL);
}
/**
* checkSubstring - a function that check if the substring.
 * Return: integer
 * @h: pointer to array of char
 * @n: the searching character
*/
int checkSubstring(char *h, char *n)
{

while (*h != '\0')
{
if (*h == *n)
{
n++;
h++;
}
else
break;
}
if (*n == '\0')
return (1);

else
return (0);
}
