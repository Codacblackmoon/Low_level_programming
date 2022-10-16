#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
			if (n == 9)
				continue;

		putchar(',');
		putchar(' ');
	}
	return (0);
}
