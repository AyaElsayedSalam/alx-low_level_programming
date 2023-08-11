#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * check the last digit is it greater than 5 , less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n,last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    last_digit = n % 10;

if ((last_digit < 6) && (last_digit != 0))
printf("%s %d %s %d %s \n","Last digit of",n ,"is",last_digit,"and is less than 6 and not 0");

else if (last_digit > 5)
printf("%s %d %s %d %s \n","Last digit of",n ,"is",last_digit,"and is greater than 5");

else if (last_digit == 0)
printf("%s %d %s %d %s \n","Last digit of",n ,"is",last_digit,"and is 0");

return (0);
}
