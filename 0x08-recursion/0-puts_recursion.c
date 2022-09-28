#include "main.h"
/**
 * _puts_recursion - function that print a string
 *@s: string to printed
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
