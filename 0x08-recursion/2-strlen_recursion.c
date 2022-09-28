#include "main.h"
/**
 * _strlen_recursion - function return the length of a string
 * @s: string to be measured
 * Return: a length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
