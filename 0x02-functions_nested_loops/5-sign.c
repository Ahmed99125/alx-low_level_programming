#include "main.h"

/**
 * print_sign - entry point
 * @n - the parameter to be checked
 * Return: 1 if +, 0 if not + or - and -1 if -
 */
int print_sign(int n)
{
	if (n > 0) 
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
