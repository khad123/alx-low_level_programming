#include <stdio.h>

/**
 * main - Entry point
 *
 * This function prints the lowercase alphabet
 * and returns 0 to indicate success.
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	alpha = 'a';
	while
		(alpha <= 'z') {
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
