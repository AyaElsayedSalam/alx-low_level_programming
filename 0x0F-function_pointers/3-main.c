#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
int (*opfunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opfunc = get_op_func(argv[2]);

	if (!opfunc)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opfunc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
