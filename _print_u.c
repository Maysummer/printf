#include "main.h"

/**
 * print_u - prints an unsigned decimal number
 * @n: the number to be printed
 *
 * Return: bytes printed
 */
int print_u(unsigned int n)
{
	int size = sizeof(int) == 4 ? 10 : 5;
	char *a, *b;

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (0);
	b = &a[size - 1];
	while (n > 0)
	{
		*b = ('0' + (n % 10));
		if (n >= 10)
			--b;
		n /= 10;
	}
	size = print_s(b);
	free(a);
	return (size);
}
