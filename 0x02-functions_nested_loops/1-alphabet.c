#include "main.h"

/**
 * print_alphabet - entry point
 * Return: always 0
 */
void print_alphabet(void)
{
	int n = 26, c = 97;

	while (n--)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
