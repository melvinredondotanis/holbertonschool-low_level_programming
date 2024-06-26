#include "main.h"

/**
 * rev_string - print strings in reverse
 * Description: function for printing stings in reverse
 * @s: string input
 * Return: range of string
 */

void rev_string(char *s)
{
	int len, i, half;
	char temp;

	len = 0;
	while (s[len] != '\0')
		len++;

	i = 0;
	half = len / 2;
	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
