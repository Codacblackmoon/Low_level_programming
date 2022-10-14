#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is positive\n", n);
	eles if (n == 0)
		printf("%d is zero\n", n);
	eles
		printf("%d is negative\n", n);
	return (0);
}
