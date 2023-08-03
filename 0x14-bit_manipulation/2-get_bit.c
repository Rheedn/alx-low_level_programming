#include "main.h"

/**
 * get_bit - Returns value of bit at a given index.
 * @n: number to check bit from.
 * @index: index of the bit, from 0 to 1.
 *
 * Return: value of bit at index index, or -1 if error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return -1;

	return (n & mask) ? 1 : 0;
}
