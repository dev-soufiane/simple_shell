#include "shell.h"

/**
 * _strdup - Duplicate a string.
 * @s: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string.
 */

char *_strdup(const char *s)
{
	char *str;
	size_t i = 0, j = 0;

	/* Check if the input string is NULL */
	if (s == NULL)
		return (NULL);

	/* Loop through the input string to find its length */
	for (i = 0; s[i] != '\0'; i++)
		;
	/* Allocate memory for the duplicated string */
	str = (char *)malloc((i + 1) * sizeof(char));
	/* Check if memory allocation was successful */
	if (str == NULL)
		return (NULL);

	/* Copy the characters from the input string to the duplicated string */
	for (j = 0; j < i; j++)
		str[j] = s[j];
	/* Add the null terminator at the end of the duplicated string */
	str[i] = '\0';

	/* Return the pointer to the duplicated string */
	return (str);
}
