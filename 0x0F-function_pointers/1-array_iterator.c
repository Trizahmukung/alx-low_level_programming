#include "function_pointers.h"

/**
 * array_iterator - Execute a function as a paramter
 *                  on each element of an array
 *
 * array: The array.
 * @size: Size of array.
 * @action: Pointer function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	/*int i;*/

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}	
