#include "main.h"

/**
 * Get_bit - function to return the value of a bit at an index in decimal
 * @n: number being searched
 * @index: bit index
 *
 * Return: Bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	return ((n >> index) & 1);
}
