#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: Length of the input string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
