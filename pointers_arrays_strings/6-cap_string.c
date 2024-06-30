#include "main.h"

/**
 * is_space - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int is_space(char c)
{
	int i = 0;
	char seperators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
						   '"', '(', ')', '{', '}'};
	while (i < 13)
	{
		if (c == seperators[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (is_space(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}

