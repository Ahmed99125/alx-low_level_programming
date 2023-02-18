#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n = 26, c = 97;

	while (n--)
	{
		putchar(c++);
	}
	n = 26, c = 65;

	while(n--)
	{
		putchar(c++);
	}
	printf("\n");
	return (0);
}
