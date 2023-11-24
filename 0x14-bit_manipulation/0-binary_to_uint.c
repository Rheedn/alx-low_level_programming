#include "main.h"

/**
 * binary_to_uint - converts a number in binary to unsigned int
 * @b: binary number in string datatype
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d_val = 0;

	if (b[0] == '\0')
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		d_val = (d_val << 1) | (b[i] - '0');
	}
	return (d_val);

}
