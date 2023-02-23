#include "main.h"
int main(void)
{
	int r;

	r = print_sign(98);
	if (r < 0)
		r *= -1;
	putchar(r + '0');
	putchar('\n');
	return (0);
}
