#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index.
 * @n: pointer to a number lu
 * @index: index of the bit
 *
 * Return: 1 if it worked, -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clr;

	if (index > 63)
		return (-1);

	clr = 1 << index;

	if (*n & clr)
		*n ^= clr;

	return (1);
}
