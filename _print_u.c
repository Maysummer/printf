#include "main.h"

/**
 * print_u - prints an unsigned decimal number
 * @n: the number to be printed
 * @buff: buffer for printing
 *
 * Return: bytes printed
 */
int print_u(unsigned int n, char *buff)
{
	int size = sizeof(int) == 4 ? 11 : 6;
	char *a, *b;

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (-1);
	b = &a[size - 1];
	*b = '\0';
	--b;
	if (n == 0)
		*b = '0';
	while (n > 0)
	{
		*b = ('0' + (n % 10));
		if (n >= 10)
			--b;
		n /= 10;
	}
	size = print_s(b, buff);
	free(a);
	return (size);
}
