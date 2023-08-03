#include "main.h"

/**
 * clear_bit - Sets value of bit to 0 at given index.
 * @n: pointer to number to modify the bit in.
 * @index: index of bit, starting from 0 - 1
 *
 * Return: 1 if it worked, or -1 if error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
