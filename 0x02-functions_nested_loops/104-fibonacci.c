#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: void.
  */
int main(void)
{
 unsigned long count, i, j, m;
i = 0;
j = 1;
for (count = 0; count < 98; count++)
{
	m = i + j;
	i = j;
	j = m;
	printf("%lu", m);
	if (count == 97)
		putchar('\n');
	else
	{
		printf(", ");
	}
}
return (0);
}
