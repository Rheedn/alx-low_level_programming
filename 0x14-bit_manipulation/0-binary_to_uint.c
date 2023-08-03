#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int.
 * @b: binary string.
 *
 * Return: The converted number..
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result <<= 1;
			result += (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return erenult);
nt shift = sizeof(unsigned long int) * 8 - 1;
    int leading_zeroes = 1;

    while (shift >= 0)
    {
            unsigned long int mask = 1UL << shift;
            if (n & mask)
            {
	                _putchar('1');
	                leading_zeroes = 0;
	            }
            else if (!leading_zeroes)
            {
	                _putchar('0');
	            }
       
}
}
