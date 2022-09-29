#incluse "main.h"
/**
 * is_prime_number - returns 1 if prime, 0 otherwise
 * @n: input
 * Return: 1 prime or 0 other
 */
int is_prime_number(int n)
{
	int i, c;

	for (i = 1; i < n; c++)
	{
	if (n % i == 0)
	{
	c++;
	}
	}
if (c == 2)
return (1);
return (0);
}
