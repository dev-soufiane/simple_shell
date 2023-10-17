#include "shell.h"

/**
 * _showPrompt - Show command line prompt.
 *
 * Return: Nothing.
 */

void _showPrompt(void)
{
	/* Check if input is from a terminal */
	if (isatty(STDIN_FILENO) == 1)
		/* Write the prompt to the standard output */
		write(STDOUT_FILENO, "$ ", 2);
}
