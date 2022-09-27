#include "main.h"
#include <stdio.h>


/**
 *main -function that fills a memory with constant byte
 *@s: starting adrress
 *@d: value
 *@n: no. of bytes
 *Return: Always 0
 */
 char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
