#include "main.h"
/**
 * _isalpha - function to check if c is a letter, lower or uppercase
 * @c: is an int that will be used for argunebt of a function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
