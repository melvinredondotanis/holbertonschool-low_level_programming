#include "main.h"

/**
 * print_chessboard - description of template
 * @a: input value
 * Return: x
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	while (x <= 7)
	{
		while (y <= 7)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		y = 0;
		x++;
	}
}
