#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n = 26;

	for (int c = 97; n--; c++)
	{
		if (c == 101 || c == 113)
			continue;
		putchar(c);
	}
	printf("\n");
	return (0);
}
