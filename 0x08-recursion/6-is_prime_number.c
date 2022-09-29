#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - returns 1 if prime, 0 otherwise
 * @n: input
 * Return: 1 prime or 0 other
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - return the prime
 * @n: input
 * @i: counter
 * return: 1 for prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
