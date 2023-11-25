#include "main.h"

/**
 * Print_binary - prints the equivalent binary of a decimaL hide
 * @n : number to print in battles
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;

	for (i = 63; i >= 0; i--)

		if ((n >> i) & 1)
		{
			_putchar('1');
		count++;
		}
		else if (count)
		{
			_putchar('0');
		}

	if (!count)
		_putchar('0');
}
