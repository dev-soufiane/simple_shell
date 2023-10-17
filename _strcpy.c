#include "shell.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, x;

	x = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[x] = src[i];
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
