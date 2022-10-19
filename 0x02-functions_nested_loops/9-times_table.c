#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 * rone = row, col = column, d = digits of current result
 * Return: time table
 * add extra space past single digit
 */
void times_table(void)
{
	int rone, col, d;

	for (rone = 0; rone <= 9; rone++;
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 0; col <= 9; col++);
		{
			d = (rone * col);
			if ((d / 10) + '0')
			{
				_putchar((d % 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchat(' ');
			}
		}
		_putchar('\n');
	}
}
