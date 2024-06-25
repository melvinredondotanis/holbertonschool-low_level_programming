#include "main.h"

/**
 * _strlen - count string
 * Description: count number of char in string
 * @s: string input
 * Return: range of string
 */

int _strlen(char *s)
{
	int i;

	while (s[i])
		i++;
	return (i);
}