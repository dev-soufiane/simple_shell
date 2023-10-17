#include "shell.h"

/**
 * _getUserInput - Get user input from the command line.
 *
 * Return: Nothing.
 */

char *_getUserInput(void)
{
	/* Variable to store user input */
	char *userInput = NULL;
	/* Size of the input buffer */
	size_t s = 0;
	/* Number of characters read */
	ssize_t nread;
	/* Read user input from stdin using getline */
	nread = getline(&userInput, &s, stdin);

	/* If getline returns -1, indicating an error or end-of-file */
	if (nread == -1)
	{
		/* Free the memory allocated for userInput */
		free(userInput);
		/* Return NULL to indicate an error or end-of-file */
		return (NULL);
	}

	/* Return the user input */
	return (userInput);
}
