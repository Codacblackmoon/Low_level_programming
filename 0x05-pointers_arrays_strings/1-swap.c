#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: int one
 * @b: int second
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
