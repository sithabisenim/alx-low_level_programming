#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i, len;
	
	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
