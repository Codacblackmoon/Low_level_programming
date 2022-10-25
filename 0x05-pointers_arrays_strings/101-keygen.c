#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for the program
 *
 * Return: 0
 */
int main(void)
{
	int pass[100];
	int a, b, sum;

	sum = 0;
	
	srand(time(NULL));

	for (a = 0; a <= 100; a++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
