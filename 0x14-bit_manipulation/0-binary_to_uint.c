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
	unsigned int result;
	
	result = 0;

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

	return (result);
}
