#include "main.h"
/**
 * _islower - fuction to check a lowecase
 * @c: is the int that will be used as an argument
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
