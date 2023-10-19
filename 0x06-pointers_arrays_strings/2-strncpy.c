#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: Destination string.
 * @src: Source string to be copied.
 * @n: Number of bytes to be copied.
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
