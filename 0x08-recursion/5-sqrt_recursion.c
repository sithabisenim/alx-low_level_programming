#include "main.h"

int real_root(int n, int i);
/**
 * _sqrt_recursion - function return natural square roots
 * @n: number given
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_root(n, 0));
}

/**
 * real_root - find natural square root of a number
 * @n: number given
 * @i: a count
 * Return: natural root
 */
int real_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_root(n, i + 1));
}
