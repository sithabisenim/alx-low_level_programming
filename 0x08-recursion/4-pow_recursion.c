#include "main.h"
/**
 * _pow_recursion - function returns value of x raised by y
 * @x: base
 * @y: exponent
 * Return: value of x
 * if y is less than 0 returns -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
