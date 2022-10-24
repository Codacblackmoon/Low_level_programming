#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int string;
	int n;

	while (*s != '\0')
	{
		string++;
		s++;
	}
	s--;
	for (n = string; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
