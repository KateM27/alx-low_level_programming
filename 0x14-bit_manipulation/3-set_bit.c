#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to an integer lu
 * @index: index of the bit from 0
 *
 * Return: 1 if it worked, -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int st_bit;

	if (index > 63)
		return (-1);

	st_bit = 1 << index;
	*n = (*n | st_bit);

	return (1);
}
