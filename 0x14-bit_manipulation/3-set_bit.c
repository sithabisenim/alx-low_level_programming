#include "main.h"

/**
 * set_bit - set a value of a bit at a given index to 1
 * @n: A pointer to a bit
 * @index: The index to set the value at - indices start at 0
 *
 * Return: If an error occurs - -1
 * otherwise - 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*N ^= (1 << index);

	return (1);
}
