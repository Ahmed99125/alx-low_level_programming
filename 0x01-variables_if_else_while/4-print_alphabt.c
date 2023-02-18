#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n = 26,  c = 97;

	while (n--)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
