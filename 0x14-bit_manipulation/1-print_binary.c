#include "main.h"

/**
 * print_binary - prints binary equivalent of a decimal number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current_int;

	for (i = 63; i >= 0; i--)
	{
		current_int = n >> i;

		if (current_int & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
