#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, num = 0;
	unsigned long int current;
	unsigned long int diff = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = diff >> k;
		if (current & 1)
			num++;
	}

	return (num);
}
