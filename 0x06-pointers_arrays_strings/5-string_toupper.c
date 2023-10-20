#include "main.h"
/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @n: The input string.
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'r')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
