#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: Difference between the first differing characters
 * of s1 and s2, or 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
