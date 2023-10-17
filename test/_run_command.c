#include "shell.h"

/**
 * _run_command - Executes a command.
 * @cmdArray: Array of command arguments.
 * @argv: Array of program arguments.
 * @indx: Index of the command in cmdArray.
 *
 * Return: Exit status of the command.
 */

int _run_command(char **cmdArray, char **argv, int indx)
{
	int stat;
	pid_t cPID;
	char *command;
	/* Get the command path */
	command = _handlePath(cmdArray[0]);
	if (command == NULL) /* Check if command path is valid */
	{
		_displayErrorMessages(argv[0], cmdArray[0], indx);
		_freeMemory(cmdArray);
		return (127);
	}
	/* Create a child process */
	cPID = fork();
	/* Child process */
	if (cPID == 0)
	{ /* Execute the command */
		if (execve(command, cmdArray, environ) == -1)
		{
			free(command);
			command = NULL;
			_freeMemory(cmdArray);
		}
	}
	else /* Parent process */
	{
		waitpid(cPID, &stat, 0); /* Wait for child process to finish */
		_freeMemory(cmdArray);
		free(command), command = NULL;
	}

	return (WEXITSTATUS(stat)); /* Return the exit status of the command */
}
