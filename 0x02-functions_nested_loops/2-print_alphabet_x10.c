#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int n, m;

	n = 0

	while (n < 10)
	{
		for (m = 'a', m <= 'z', m++)
			_putchar(m);
	}
	n++;
	_putchar('\n');
}
