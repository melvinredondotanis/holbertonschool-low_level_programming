#include <unistd.h>
#include "main.h"

/**
 * _puts - print strings
 * Description: function for printing stings
 * @str: string input
 * Return: range of string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, '\n', 1);
	return (i);
}
