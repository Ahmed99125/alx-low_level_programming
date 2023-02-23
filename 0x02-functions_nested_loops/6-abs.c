#include "main.h"

/**
 * _abs - entry point
 * @n: the value to be checked
 * Return: absolute n
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
