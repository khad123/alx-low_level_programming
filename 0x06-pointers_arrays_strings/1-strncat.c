#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: Destination string.
 * @src: Source string to be concatenated.
 * @n: Number of bytes to concatenate.
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
