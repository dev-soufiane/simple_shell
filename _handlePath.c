#include "shell.h"

/**
 * _handlePath - Find the path of a command.
 * @cmdLine: Command line input.
 *
 * Return: Path of the command if found, otherwise (NULL)
 */

char *_handlePath(char *cmdLine)
{
	int i;
	struct stat stt;
	char *pathVal, *location, *cmdFP;

	for (i = 0; cmdLine[i]; i++)
	{
		if (cmdLine[i] == '/')
		{
			if (stat(cmdLine, &stt) == 0)
				return (_strdup(cmdLine));
			return (NULL);
		}
	}
	pathVal = _getenv("PATH");
	if (pathVal == NULL)
		return (NULL);
	location = strtok(pathVal, ":");
	while (location)
	{
		cmdFP = malloc(_strlen(location) + _strlen(cmdLine) + 2);
		if (cmdFP == NULL)
		{
			free(pathVal);
			return (NULL);
		}
		_strcpy(cmdFP, location);
		_strcat(cmdFP, "/");
		_strcat(cmdFP, cmdLine);
		if (stat(cmdFP, &stt) == 0)
		{
			free(pathVal);
			return (cmdFP);
		}
		free(cmdFP);
		location = strtok(NULL, ":");
	}
	free(pathVal);
	return (NULL);
}
