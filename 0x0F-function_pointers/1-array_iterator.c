#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as parameter
 * @array: array
 * @size: size of array
 * @action: A pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
