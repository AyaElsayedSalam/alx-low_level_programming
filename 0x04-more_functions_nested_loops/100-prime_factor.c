#include <stdio.h>
/**
 * main - a program that finds and prints
 *        the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
long number = 612852475143;
long  div = 2, maxPrimeFact;
while (number != 0)
{
if (number % div != 0)
div = div + 1;
else
{
maxPrimeFact = number;
number /= div;
if (number == 1)
{
printf("%lu\n", maxPrimeFact);
break;
}
}
}
return (0);
}
