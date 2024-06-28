#include "main.h"

/**
 * string_toupper - print strings in reverse
 * Description: function for printing stings in reverse
 * @str: string input
 * Return: range of string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
