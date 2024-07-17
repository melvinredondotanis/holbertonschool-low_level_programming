#include "3-calc.h"

/**
 * _strlen - count string
 * Description: count number of char in string
 * @s: string input
 * Return: range of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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
	if (!operate || _strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operate(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
