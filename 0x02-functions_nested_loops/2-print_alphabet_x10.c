#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet,
    * in lowercase 10 times, followed by a new line.
    * Return : void
    * argument: void
**/
void print_alphabet_x10(void)
{
char ch;
int num_print;
for (num_print = 0 ; num_print < 10 ; num_print++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
_putchar(ch);
_putchar('\n');
}
}
