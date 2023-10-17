#include "shell.h"

/**
 * _freeMemory - Frees memory allocated for a 2D array.
 * @myArray: Pointer to the 2D array.
 *
 * Return: Nothing.
 */

void _freeMemory(char **myArray)
{
	int i;

	/* Check if myArray is NULL */
	if (myArray == NULL)
		return;

	/* Free memory for each element in myArray */
	for (i = 0; myArray[i]; i++)
	{
		free(myArray[i]);
		myArray[i] = NULL;
	}

	/* Free memory for myArray */
	free(myArray);
	myArray = NULL;
}
