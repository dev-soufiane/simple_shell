#include "shell.h"

/**
 * _string_splitter - Split a string into an array of tokens.
 * @s: String to split.
 *
 * Return: Array of tokens, NULL-terminated.
 */

char **_string_splitter(char *s)
{
	int count = 0, i = 0;
	char **strList = NULL;
	char *token = NULL, *copy = NULL;

	if (!s)
		return (NULL);
	copy = _strdup(s);
	token = strtok(copy, " \n\t\r");
	if (token == NULL)
	{
		free(s), s = NULL;
		free(copy), copy = NULL;
		return (NULL);
	}
	while (token)
	{
		count++;
		token = strtok(NULL, " \n\t\r");
	}
	free(copy);
	copy = NULL;
	strList = malloc(sizeof(char *) * (count + 1));
	if (!strList)
	{
		free(s);
		s = NULL;
		return (NULL);
	}
	token = strtok(s, " \n\t\r");
	while (token)
	{
		*(strList + i) = _strdup(token);
		token = strtok(NULL, " \n\t\r");
		i++;
	}
	free(s);
	s = NULL;
	*(strList + i) = NULL;
	return (strList);
}
