#include "main.h"
#include <stdio.h>
/**
 * print_array - input num of array
 * @a: array
 * @n: elements to print
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index != n - 1)
			printf("%d, ", a[index]);
		else
			printf("%d", a[index]);
	}
	putchar(10);
}
