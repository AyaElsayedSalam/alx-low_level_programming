#include <stdio.h>
/**
* main - Entry point
* a program that prints all the numbers of base 16
* in lowercase, followed by a new line.
 * Return: Always 0 (Success)
*/
int main(void)
{
int num;
char ch;
for (num = 0 ; num < 10 ; num++)
putchar('0' + num);

for (ch = 'a' ; ch <= 'f' ; ch++)
putchar(ch);

putchar('\n');
return (0);
}
