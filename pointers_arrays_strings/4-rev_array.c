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
	int i;
	int a[n];

	i = 1;

	while (i < n)
	{
		a[n - i] = a[i];
		i++;
	}

	i = 1;

	while (i < n)
	{
		a[i] = a[i];
		i++;
	}
}