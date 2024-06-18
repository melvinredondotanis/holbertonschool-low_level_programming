#include <stdio.h>

/**
  * main - coucou
  * Return: 0
  */

int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i == 101 || i == 113)
			i++;
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
