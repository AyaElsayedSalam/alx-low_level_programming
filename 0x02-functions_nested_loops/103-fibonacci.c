#include <stdio.h>
/**
  * main - prints the sum of the even-valued terms, followed by a new line.
  * Return: Nothing.
  */
int main(void)
{
unsigned long count, i = 0, j = 1, k, sum = 0;
for (count = 0; count < 50; count++)
{
	k = i + j;
	i = j;
	j = k;
	if (k % 2 == 0 && k < 4000000)
	{
		sum += k;
	}
}
printf("%lu\n", sum);
return (0);
}
