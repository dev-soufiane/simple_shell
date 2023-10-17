#include "shell.h"

/**
 * _builtinCheck - Checks if a command is a built-in command.
 * @cmdName: The name of the command to check.
 *
 * Return: (1) if the command is a built-in command, (0) otherwise.
 */

int _builtinCheck(char *cmdName)
{
	int i;

	char *bList[] = {"env", "exit", "cd", NULL};

	i = 0;

	/* Loop through bList */
	while (bList[i])
	{
		/* Check if cmdName matches a built-in command */
		if (_strcmp(cmdName, bList[i]) == 0)
			return (1);

		/* Check next */
		i++;
	}

	/* Return 0 if cmdName is not a built-in command */
	return (0);
}
