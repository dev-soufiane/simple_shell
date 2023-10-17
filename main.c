#include "shell.h"

/**
 * main - Simple shell program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: Exit status of the program.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int stat = 0, indx = 0;
	char *input = NULL, **cmd = NULL;

	while (1) /* Infinite loop for shell program */
	{
		_showPrompt(); /* Show command line prompt $ */
		input = _getUserInput(); /* Get user input */
		if (input == NULL) /* Handling end of file case (CTRL+D) */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (stat);
		}
		indx++; /* Increment command index */
		/* Split user input into command array */
		cmd = _string_splitter(input);
		if (cmd == NULL) /* Check if command array is empty */
			continue;
		/* Check if command is a built-in command */
		if (_builtinCheck(cmd[0]))
			_execBuiltin(cmd, argv, &stat, indx);
		else
			stat = _run_command(cmd, argv, indx);
	}
	/* Return exit status of the program */
	return (0);
}
