#include "main.h"
/**
* print_line -  a function that draws a straight line in the terminal.
 * Return: void
 * @n: number of line needed
*/
void print_line(int n)
{
int i;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
