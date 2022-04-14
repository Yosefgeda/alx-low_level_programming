#include "function_pointers.h"

/**
 * array_iterator - iterates array.
 * @array: array.
 * @size: of array
 * @action: of array
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
	for (i = 0 ; i < size ; i++)
		action (array[i]);
}
