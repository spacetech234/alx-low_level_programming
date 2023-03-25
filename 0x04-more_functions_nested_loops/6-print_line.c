#include "main.h"

/**
 * print_line - draw line of length n
 * @n: number of underscores (_) to draw the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
