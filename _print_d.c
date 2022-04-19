#include "main.h"

/**
 * print_d - prints an decimal number
 * @n: the number to be printed
 *
 * Return: bytes printed
 */
int print_d(int n)
{
	int size = sizeof(int) == 4 ? 10 : 5;
	char *a, *b;

	if (n < 0)
		size += 1;
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (0);
	b = &a[size - 1];
	size = (n < 0 ? -n : n);
	while (size > 0)
	{
		*b = ('0' + (size % 10));
		if (size >= 10)
			--b;
		size /= 10;
	}
	if (n < 0)
	{
		--b;
		*b = '-';
	}
	size = print_s(b);
	free(a);
	return (size);
}
