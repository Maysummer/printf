#include "main.h"

/**
 * print_b - prints the binary form of an integer
 * @n: integer to print
 *
 * Return: number of bytes printed
 */
int print_b(unsigned int n)
{
	char *a = malloc(sizeof(char) * 32), *b;
	int i = 0;

	if (a == NULL)
		return (0);
	b = &a[31];
	while (n > 0)
	{
		*b = ('0' + (n % 2));
		if (n >= 2)
			--b;
		n /= 2;
	}
	i = print_s(b);
	free(a);
	return (i);
}
