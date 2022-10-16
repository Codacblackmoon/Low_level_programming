#include <stdio.h>

/**
 * main - Enrty point
i:*
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
	{
		if (word != 'e' && word != 'q')
			putchar(word);
	}

	putchar('\n');
	return (0);
}
