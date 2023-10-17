#include "shell.h"

/**
 * _getenv - Get environment variable value.
 * @Var: The envirement variable.
 *
 * Return: String pointer.
 */

char *_getenv(char *Var)
{
	int i = 0;
	char *copy, *output, *envValue, *envVar;

	/* Loop through the environment variables */
	while (environ[i] != NULL)
	{
		/* Make a duplicate of the current environment variable */
		copy = _strdup(environ[i]);
		/* Getthe variable name */
		envVar = strtok(copy, "=");
		 /* Check if the variable matches the desired one */
		if (_strcmp(envVar, Var) == 0)
		{
			/* Get the variable value */
			envValue = strtok(NULL, "\n");
			/* Create a duplicate of the value */
			output = _strdup(envValue);
			/* Free the copy and return the value */
			free(copy);
			return (output);
		}
		/* Free the copy and set it to NULL */
		free(copy), copy = NULL;
		/* Go to the next environment variable */
		i++;
	}
	/* Return NULL if the variable is not found */
	return (NULL);
}
