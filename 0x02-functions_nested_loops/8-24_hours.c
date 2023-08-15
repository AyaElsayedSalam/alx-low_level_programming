#include "main.h"
/**
 * jack_bauer -   a function that prints every minute of
 *                the day of Jack Bauer, starting from 00:00 to 23:59.
    * Return: void
**/
void jack_bauer(void)
{
int hours, mm;
for (hours = 0 ; hours < 24 ; hours++)
{
for (mm = 0; mm < 60 ; mm++)
{
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(':');
_putchar((mm / 10) + '0');
_putchar((mm % 10) + '0');
_putchar('\n');
}
}
}
