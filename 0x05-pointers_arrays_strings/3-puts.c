#include "main.h"
/**
 * _puts - Prints a string followed by
 * a new line to the standard output.
 * @str: Pointer to the input string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
