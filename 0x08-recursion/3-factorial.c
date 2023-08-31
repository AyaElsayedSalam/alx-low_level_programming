#include "main.h"
/**
* factorial - a function that returns the factorial of a given number.
 * Return: integer which represent the factorial of  number
 * @n: integer number
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
