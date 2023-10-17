#include "shell.h"

/**
 * _exit_ - Exits the shell after freeing memory.
 * @arg: A pointer to a char array of arguments.
 * @st: A pointer to an integer representing the exit status.
 *
 * Return: Nothing.
 */

void _exit_(char **arg, int *st)
{
	/* Free memory */
	_freeMemory(arg);

	/* Exit with the specified status */
	exit(*st);
}
