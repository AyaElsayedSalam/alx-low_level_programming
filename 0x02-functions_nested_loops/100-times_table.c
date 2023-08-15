#include "main.h"
/**
 *  print_times_table -  a function that prints n times table.
    * Return: void
    * @n: time table
**/
void print_times_table(int n)
{
int i, m, res = 0;
if ((n < 15) && (n > 0))
{
for (i = 0 ; i <= n ; i++)
{
for (m = 0 ; m <= n ; m++)
{
res = (i * m);
if (m != 0)
{
_putchar(',');
_putchar(' ');
}
if ((res >= 10) && (res < 100))
{
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res < 10 && m != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((res % 10) + '0');
}
else if ((res >= 100) && (m != 0))
{
_putchar((res / 100) + '0');
_putchar((res / 10) % 10 + '0');
_putchar((res % 10) + '0');
}
else
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
}
