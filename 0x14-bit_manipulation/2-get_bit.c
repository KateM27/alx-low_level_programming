#include "main.h"

/**
 * get_bit - sets the value of a bit to 1 at a given index
 * @n: bit to input
 * @index: index of bit from 0
 *
 * Return: 1 if it works, -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
