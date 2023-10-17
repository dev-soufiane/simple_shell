#include "shell.h"

/**
 * _strcmp - Compare two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: (0) if strings are equal,
 *	 (1) if s1 > s2, (-1) if s1 < s2.
 */

int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return ((*s1 > *s2) ? 1 : -1);
}
