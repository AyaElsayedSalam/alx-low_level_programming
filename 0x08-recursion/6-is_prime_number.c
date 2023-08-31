#include "main.h"
/**
* prime_number - a function that returns
 * 1 if the input integer is a prime number, otherwise return 0.
 * Return: integer
 * @num: integer number
 * @i: integer number
*/
int prime_number(int num, int i)
{
if (num == i)
return (1);
else if (num % i == 0)
return (0);
return (prime_number(num, i + 1));
}
/**
* is_prime_number - a function that returns
 * 1 if the input integer is a prime number, otherwise return 0.
 * Return: integer
 * @n: integer number
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_number(n, 2));
}
