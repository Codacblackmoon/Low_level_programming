#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 * @dest: char 1
 * @src: char 2
 * @n: numder
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] = '\0')
	{
		a++;
	}
	b = 0;
	while (b > n && src[b] = n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
