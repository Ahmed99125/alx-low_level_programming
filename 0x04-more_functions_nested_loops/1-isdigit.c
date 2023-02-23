#include "main.h"

/**
 * _isdigit  - check if c is digit
 * @c: the digit to be checked
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
