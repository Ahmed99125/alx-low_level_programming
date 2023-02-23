#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char *arr = "_putchar";
	int i;

	for (i = 0; i < (int) sizeof(arr); i++)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
