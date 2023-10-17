#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
	char rev = s[0];
	int con = 0;
	int i;

	while (s[con] != '\0')
		con++;

	for (i = 0; i < con; i++)
	{
		con--;
		rev = s[i];
		s[i] = s[con];
		s[con] = rev;
	}
}
