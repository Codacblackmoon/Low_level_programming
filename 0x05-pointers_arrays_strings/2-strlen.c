#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: lanth od string
 */
int _strlen(char *s)
{
	int lenth = 0;

	while (*s  != '\0')
	{
		lenth++;
		s++;
	}

	return (lenth);
}
