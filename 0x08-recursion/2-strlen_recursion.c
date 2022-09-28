#include "main.h"
/**
 * _strlen_recursion - function return the length of a string
 * @s: string to be measured
 * Return: a length
 */
int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s)
	{
		str++;
		str += _strlen_recursion(s + 1);
	}
}
