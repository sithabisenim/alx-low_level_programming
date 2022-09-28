#include "main.h"
/**
 * factorial - function returns a factorial of a given number
 * @n: a given number
 * Return: a factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
