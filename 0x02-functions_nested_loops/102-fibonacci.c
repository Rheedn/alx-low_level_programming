#include <stdio.h>

/**
  *main - Prints first 50 Fibonacci numbers. stating with and 2. se[erated ny a comma followed by space
  *Return: Always 0
  */
int main(void)
{
	int count;
		unsigned long fib1 = 0, fib2 = 1, sum;

		for (count = 0; count < 50; count++)
		{
			sum = fib1 + fib2;
			printf("%lu", sum);

			fib1 = fib2;
			fib2 = sum;

			if (count == 49)
				printf("\n");
			else 
				printf(",");
		}
}
