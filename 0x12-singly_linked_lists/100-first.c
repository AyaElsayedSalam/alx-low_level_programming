#include <stdio.h>

void __attribute__((constructor)) print_bf_main(void);

/**
 * print_bf_main - Prints a string before the
 *        main function is executed.
 */
void print_bf_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
