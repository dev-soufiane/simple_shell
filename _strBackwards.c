#include "shell.h"

/**
 * _strBackwards - Reverses a string.
 * @s: String to be reversed.
 * @size: Length of the string.
 *
 * Return: Nothing.
 */

void _strBackwards(char *s, int size)
{
	int last = size - 1;
	int begin = 0;
	char temp;

	/* Reverse the string */
	while (begin < last)
	{
		/* Swap characters */
		temp = s[begin];
		s[begin] = s[last];
		s[last] = temp;
		/* Move to the next characters */
		begin++;
		last--;
	}
}
