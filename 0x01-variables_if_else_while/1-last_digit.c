#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d and is ", n, d);
	if (d > 5)
		printf("greater than 5\n");
	else if (d == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
