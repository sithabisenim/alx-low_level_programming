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
	else if (n == 0 || n == 1);
	return (1);
	else (n * factorial(n - 1));
}
