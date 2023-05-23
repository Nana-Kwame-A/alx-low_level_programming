#include "main.h"

/**
 * get_bits - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bits(unsigned long int n, unsigned int index)
{
	int bits_val;

	if (index > 63)
		return (-1);

	bits_val = (n >> index) & 1;

	return (bits_val);
}
