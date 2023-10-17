#include "shell.h"

/**
 * _execBuiltin - Executes builtin commands.
 * @cmdArg: Array of command arguments.
 * @argv: Array of program arguments.
 * @st: Pointer to the status variable.
 * @indx: Index of the command in the command array.
 *
 * Return: Nothing.
 */

void _execBuiltin(char **cmdArg, char **argv, int *st, int indx)
{
	/* Chekc if command is env */
	if (_strcmp(cmdArg[0], "env") == 0)
		/* Call the _printEnv function */
		_printEnv(cmdArg, st);
	/* Check if command is exit */
	else if (_strcmp(cmdArg[0], "exit") == 0)
		/* Call the _exit_ function */
		_exit_(cmdArg, st);

	/* Ignoring unused argv (To be completed later) */
	(void) argv;
	/* Ignoring unused indx (To be completed later) */
	(void) indx;
}
