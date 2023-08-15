#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: void.
  */
int main(void)
{
int count, i, j, m;
i = 0;
j = 1;
for (count = 0; count < 50; count++)
{
	m = i + j;
	i = j;
	j = m;
	printf("%d", m);
	if (count == 49)
		putchar('\n');
	else
	{
		printf(", ");
	}
}
return (0);
}
