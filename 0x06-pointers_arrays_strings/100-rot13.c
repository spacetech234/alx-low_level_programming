#include "main.h"
#include <stdlib.h>

/**
 * rot13 - rotates the letters in a string by 13
 * @c: string to apply the rotation to
 * Return: encoded string
 */

char *rot13(char *c)
{
	char l1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *d = malloc(strlen(c) * sizeof(char));
	unsigned int i, j;

	strcpy(d, c);

	for (i = 0; i < strlen(c); i++)
	{
		for (j = 0; j < strlen(l1); j++)
		{
			if (c[i] == l1[j])
				d[i] = l2[j];
		}
	}

	strcpy(c, d);

	return (c);
}
