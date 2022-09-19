#include "main.h"
#include <stdio.h>
/**
 * _puts - write string followed by new line
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		
		_putchar(*str++);
			
			_putchar('\n');
}
