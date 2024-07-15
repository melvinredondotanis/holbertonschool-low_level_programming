#include "3-calc.h"

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char **argv)
{
	int (*operate)(int, int);

	if (argc != 4)
	{	printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	operate = get_op_func(argv[2]);
	if (!operate)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operate(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
