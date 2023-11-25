#include "main.h"

/**
 * Get_bit - function to return the value of a bit at an index in decimal
 * @n: number being searched
 * @index: bit index starting from 0 of the bit to get
 *
 * Return: Value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= 63)
	{
		return (-1);
	}

	value = (n >> index) & 1;


	return (value);
}
