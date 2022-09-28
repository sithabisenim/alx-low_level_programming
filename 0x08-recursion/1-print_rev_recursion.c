#include "main.h"
/**
 * _print_rev_recursion - fuction prints a string in reverse
 * @s: string to be printed
 * Return: 1 on success
 * error, -1 is returned
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
