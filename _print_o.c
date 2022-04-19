#include "main.h"

/**
 * print_o - prints the octal form of an integer
 * @n: integer to print
 *
 * Return: number of bytes printed
 */
int print_o(unsigned int n)
{
	char *a = malloc(sizeof(char) * 11), *b;
	int i = 0;

	if (a == NULL)
		return (0);
	b = &a[31];
	while (n > 0)
	{
		*b = ('0' + (n % 8));
		if (n >= 8)
			--b;
		n /= 8;
	}
	i = print_s(b);
	free(a);
	return (i);
}
