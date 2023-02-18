#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n = 16, c = 48;

	while (n--)
	{
		if (n == 5)
			c = 97;
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
