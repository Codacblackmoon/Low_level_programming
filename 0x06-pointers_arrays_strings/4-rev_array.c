#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: string
 * @n: array
 * return:
 */
void reverse_array(int *a, int n)
{
	int a;
	int b;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
