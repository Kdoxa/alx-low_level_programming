#include "function_pointers.h"

/**
 * array_iterator -> it executes a function
 * @array: integer array
 * @size: array size
 * @action: pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
