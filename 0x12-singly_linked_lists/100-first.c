#include <stdlib.h>
#include <stdio.h>

/**
 * first - prints before main
 */
void _attribute_ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
