#include "main.h"
/**
 * _sqrt_recursion - function return natural square roots
 * @n: number given
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (n * _sqrt_recursion(n - 1));
}
