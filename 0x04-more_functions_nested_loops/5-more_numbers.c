#include "main.h"
/**
* more_numbers - a function that prints the numbers,
 *                from 0 to 14, followed by a new line.
 * Return: void
*/
#define times_of_print 10

void more_numbers(void)
{
int n;
int i = 0;
while (i < times_of_print)
{
for (n = 0; n < 15; n++)
{
if (n > 9)
_putchar((n / 10) + '0');

_putchar((n % 10) + '0');
}
_putchar('\n');
i++;
}
}
