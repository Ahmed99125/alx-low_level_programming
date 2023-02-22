#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char *arr = "_putchar";

	for (int i = 0; i < sizeof(arr); i++)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
