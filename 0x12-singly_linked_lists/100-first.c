#include <stdio.h>

/**
 * tort - prints something before main is executed
 *
 * Return: Nothing
 */
void __attribute__ ((constructor)) tort()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
