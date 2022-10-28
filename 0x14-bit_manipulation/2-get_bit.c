#include "main.h"

/**
 * get_bit - get of value of a bit at a given index
 * @n: The bit
 * @index: the index to get a value at - indices start at 0.
 * Return: If an error occurs - -1.
 * Otherwise - the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
