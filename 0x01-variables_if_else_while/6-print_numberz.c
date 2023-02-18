#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n = 10, d = 48;

	while (n--)
	{
		putchar(d++);
	}
	putchar('\n');
	return (0);
}
