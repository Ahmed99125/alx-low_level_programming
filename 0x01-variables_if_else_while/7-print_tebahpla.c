#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n = 0, c = 122;

	while (n++ < 26)
	{
		putchar(c--);
	}
	putchar('\n');
	return (0);
}
