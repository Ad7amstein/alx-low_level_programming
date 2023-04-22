#include "function_pointers.h"
/**
 * array_iterator -  function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: array of integers
 * @size: size of the array
 * @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
}
