#include "main.h"

/**
 * print_sign - entry point
 * @n - the parameter
 * Return: 1 if +, 0 if 0 and -1 if -
 */
int print_sign(int n)
{
	if (n > 0) 
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
