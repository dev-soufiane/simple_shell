#include "shell.h"

/**
 * _printEnv - Print environment variables.
 * @cmd: Command arguments.
 * @st: Status indicator.
 *
 * Return: Nothing.
 */

void _printEnv(char **cmd, int *st)
{
	int i = 0;

	/* Loop through the environment variables */
	while (environ[i])
	{
		/* Write the environment variable to the standard output */
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		/* Write a new line character */
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}

	/* Free the memory allocated for the command arguments */
	_freeMemory(cmd);
	/* Set the status value to 0 */
	*st = 0;
}
