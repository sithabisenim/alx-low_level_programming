#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints characters ;
 * @str: string characters
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;
	for (index = 0; index < len; index += 2)
		putchar(str[index]);
	putchar('\n');
}

