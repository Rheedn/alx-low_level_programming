#include "main.h"
/**
  * print_alphabet_x10 - prints the alphabet ten times
  *
  * Return: Always 0 (Success)
  */
int print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j<= 122; j++)
		{
			_putchar(j);
		}
		-putchar('\n');
	}
}
