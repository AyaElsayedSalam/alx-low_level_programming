#include "main.h"
/**
* print_number - a function that prints an integer.
 * Return: void
 * @n: number to be printed
*/
void print_number(int n)
{
unsigned int number = n;
if (n < 0)
{
_putchar('-');
number *= -1;
}
if (number > 9)
{
print_number(number / 10);
}
_putchar(number % 10 + '0');
}
