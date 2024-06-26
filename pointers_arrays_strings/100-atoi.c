#include "main.h"

/**
 * _atoi - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 * Return: blalba
 */

int _atoi(char *str)
{
	int i = 0;
	unsigned int value = 0;
	int p_or_n = 1;

	while ((str[i] < '0') || (str[i] > '9'))
	{
		if (str[i] == '\0')
			return (0);
		if (str[i] == '-')
			p_or_n *= -1;
		i++;
	}

	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (p_or_n * value);
}
