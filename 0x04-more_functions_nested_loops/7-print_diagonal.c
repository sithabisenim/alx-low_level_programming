#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int co, sp;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 0; co <= n; co++)
		{
			for (sp = 0; sp < co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (co == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
