#include "main.h"
#include<stdio.h>
/**
* leet -   a function that encodes a string into 1337.
 * Return: char*
 * @s: pointer to array of string
*/
char *leet(char *s)
{
char a[] = "aAeEoOtTlL";
char n[] = "4433007711";
int i = 0;
int j;
while (s[i] != '\0')
{
for (j = 0; j <= 9; j++)
{
if (a[j] == s[i])
{
s[i] = n[j];
}
}
i++;
}
return (s);
}
