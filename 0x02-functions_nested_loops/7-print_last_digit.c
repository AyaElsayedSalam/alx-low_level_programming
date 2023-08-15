#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
    * Return: last digit of the number
    * @c: is an integer variable of the input number
    * local variable - result: is n integer var has the returned value
**/
int print_last_digit(int c)
{

int last_digit = 0;

if (c < 0)
c *= -1;

last_digit = c % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
