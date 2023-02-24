#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int i, j, k = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
			_putchar('/');
			_putchar('$');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('$');
		_putchar('\n');
	}
}
