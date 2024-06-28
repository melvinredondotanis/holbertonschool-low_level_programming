#include "main.h"

/**
 * _strcat - xxxxx
 * Description:xxxx
 * @dest: xxxx
 * @src: xxxxxx
 * Return: xxx
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n)
	{
		tmp = a[n - i - 1];
		a[n - 1 - i] = tmp;
		i++;
	}
}