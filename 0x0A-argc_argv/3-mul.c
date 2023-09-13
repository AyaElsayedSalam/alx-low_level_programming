#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
int mult;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", mult);
return (0);
}
