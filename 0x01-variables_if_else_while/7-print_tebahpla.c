#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word;

	for (word = 'z'; word >= 'a'; word--)
		putchar(word);

	putchar('\n');
	return (0);
}
