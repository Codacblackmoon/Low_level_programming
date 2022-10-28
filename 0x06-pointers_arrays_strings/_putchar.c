#include <unisd.h>

/**
 * _putchar - write the characters
 * @c: cha r to be printed
 * Return: 1
 */
int _putcha(char c)
{
	return (write(1, &c, 1));
}
