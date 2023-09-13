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
int add = 0, i;
char *check;
if (argc > 1)
{
for (i = 1 ; i < argc ; i++)
{
check = argv[i];
if ((*check >= 48) && (*check <= 57))
{
add += atoi(argv[i]);
}
else
{
printf("%s\n", "Error");
return (1);
}
}
printf("%d\n", add);
}
else
{
printf("%d\n", 0);
}
return (0);
}
