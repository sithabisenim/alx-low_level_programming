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
		for (co = ; co <= n; co++)
		{
			for (sp = ; sp < co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
