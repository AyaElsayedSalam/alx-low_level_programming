#include "main.h"
/**
 *  times_table -  a function that prints the 9 times table, starting with 0.
    * Return: void
**/
void  times_table(void)
{
int n, m, res = 0;
for (n = 0 ; n < 10 ; n++)
{
for (m = 0 ; m < 10 ; m++)
{
res = (n * m);
if (m != 0)
{
_putchar(',');
_putchar(' ');
}
if (res >= 10)
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res < 10 && m != 0)
{
_putchar(' ');
_putchar((res % 10) + '0');
}
else
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
