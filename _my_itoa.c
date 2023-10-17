#include "shell.h"

/**
 * _my_itoa - Convert integer to string.
 * @n: Integer to be converted.
 *
 * Return: String representation of the integer.
 */

char *_my_itoa(int n)
{
	char *result;
	char buffer[20];
	int j, i = 0;

	if (n == 0)
		buffer[i++] = '0'; /* Store '0' in buffer if n is zero */
	else
	{
		while (n > 0)
		{
			/* Convert each digit of n to character and store in buffer */
			buffer[i++] = (n % 10) + '0';
			n /= 10;
		}
	}
	buffer[i] = '\0'; /* Null-terminate the buffer */
	_strBackwards(buffer, i); /* Reverse the contents of the buffer */

	result = (char *)malloc(i + 1); /* +1 for the null terminator */

	if (result == NULL)
	{
		return (NULL); /* Handle memory allocation error */
	}
	/* Copy the reversed string to the dynamically allocated memory */
	for (j = 0; j < i; j++)
	{
		result[j] = buffer[j];
	}
	result[i] = '\0'; /* ending the result string with NULL character */
	return (result);
}
