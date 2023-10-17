#include "shell.h"

/**
 * _strlen - Get the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}
