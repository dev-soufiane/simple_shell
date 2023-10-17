#include "shell.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the string
 * @src: Pointer to the string
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, last_element;
	char c;

	last_element = 0;

	while (*(dest + last_element) != '\0')
		last_element++;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		c = *(src + i);
		*(dest + last_element) = c;
		last_element++;
	}

	*(dest + last_element) = '\0';

	return (dest);
}
