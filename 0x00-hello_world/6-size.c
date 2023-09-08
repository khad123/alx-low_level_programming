#include <stdio.h>
/**
 * main - Aprogram that print size of various types
 * Return 0 (Success)
 */
int main(void)
{
char c;
int i;
long int ic;
long long int d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(ic));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
