#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i = 10;

	while (i--)
	{
		char c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
