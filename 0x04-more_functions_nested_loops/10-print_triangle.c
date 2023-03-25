#include "main.h"

/**
 * print_triangle - print triangle using *size* numbers of '#'
 * @size: number of '#' to print
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k = 1;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= size - k)
					_putchar('#');
				else
					_putchar(' ');
			}
		k += 1;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
