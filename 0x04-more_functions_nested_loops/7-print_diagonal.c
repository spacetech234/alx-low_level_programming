#include "main.h"

/**
 * print_diagonal - print backslashes n number of times
 * @n: number of times to print backslashes (\)
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < i)
					_putchar(' ');

				if (i == j)
					_putchar('\\');
			}
		_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
