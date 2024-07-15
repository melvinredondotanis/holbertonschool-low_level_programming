#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: cmp(function) to compare the elements throw array
 * Return: The index of the first element for witch the cmp function
 * does not return 0; -1 if no elements matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp || !array)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			break;
		i++;
	}

	if (size <= 0 || i == size)
		return (-1);

	return (i);
}
