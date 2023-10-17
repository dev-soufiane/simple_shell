#include "shell.h"

/**
 * _displayErrorMessages - Displays error messages for a command not found.
 * @shell_name: The name of the shell.
 * @command: The command that was not found.
 * @indx: The index of the command.
 *
 * Return: Nothing.
 */

void _displayErrorMessages(char *shell_name, char *command, int indx)
{
	/* Declare and initialize error message */
	char *message = ": not found\n";
	/* Declare index variable */
	char *index;
	/* Convert index to string */
	index = _my_itoa(indx);

	/* Write shell name to standard error */
	write(STDERR_FILENO, shell_name, _strlen(shell_name));
	/* Write ': 'separator to standard error */
	write(STDERR_FILENO, ": ", 2);
	/* Write index to standard error */
	write(STDERR_FILENO, index, _strlen(index));
	/* Write ': 'separator to standard error */
	write(STDERR_FILENO, ": ", 2);
	/* Write command name to standard error */
	write(STDERR_FILENO, command, _strlen(command));
	/* Write error message to standard error */
	write(STDERR_FILENO, message, _strlen(message));

	/* Free index memory */
	free(index);
}
