#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
unsigned int add = 0;
int i;
char *check;
if (argc > 1)
{
for (i = 1 ; i < argc ; i++)
{
check = argv[i];
while (*check != 0)
{
if (*check < 47 || *check > 57)
{
printf("%s\n", "Error");
return (1);
}
check++;
}
add += atoi(argv[i]);
}
printf("%d\n", add);
}
else
{
printf("%d\n", 0);
}
return (0);
}
