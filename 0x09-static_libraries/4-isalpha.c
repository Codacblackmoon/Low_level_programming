#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: is the char that is being checkedi
 * Return: 1 if char is letter lower or upper. 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
