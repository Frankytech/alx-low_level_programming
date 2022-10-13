#include "function_pointers.h"

/*
 *array iterator executes a function given as a parameter
 *on each element of an array
 *
 *@array - array to iterate
 *@size -size of the array
 *@action - pointer to the array iterator
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size--)
	{
		(*action)(*array++);
	}

}
