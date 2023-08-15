#include "main.h"
#include <stdio.h>
/**
 *  sum_of_mult - sum the numbers that are multiples of 3 or 5
    * Return: the summation
    * @n: the range
**/
int sum_of_mult(int n)
{
int i, sum = 0;
for (i = 3; i < n ; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
sum += i;
}
return (sum);
}
/**
 *  main -  the entry point
    * Return: int
**/
int main(void)
{

int res = sum_of_mult(1024);
printf("%d\n", res);
return (0);
}
