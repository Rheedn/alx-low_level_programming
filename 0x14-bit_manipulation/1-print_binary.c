#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeroes;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << ((sizeof(mask) * 8) - 1);
	leading_zeroes = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			leading_zeroes = 0;
		}
		else if (!leading_zeroes)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
