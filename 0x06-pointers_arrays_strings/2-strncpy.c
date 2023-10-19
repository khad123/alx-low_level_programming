#include "main.h"

/**
 * _strncpy - Copies up to n bytes from the source
 * string to the destination string.
 * @dest: Destination string.
 * @src: Source string to be copied.
 * @n: Number of bytes to be copied.
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
