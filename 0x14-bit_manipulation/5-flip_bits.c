#include "main.h"

/**
 * flip_bits - counts number of the bits to change
 * to get from one number to the other
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current_int;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_int = exclusive >> i;
		if (current_int & 1)
			count++;
	}

	return (count);
}
