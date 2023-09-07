#include "main.h"
/**
* _puts - a function that prints a string, followed by a new line, to stdout.
 * Return: void
 * @str: pointer to char
*/
void _puts(char *str)
{
int len = 0;
while (str[len] != '\0')
{
_putchar(str[len++]);
}
_putchar('\n');
}
